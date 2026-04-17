#include "BaseMilitar.hpp"
#include "LancadorMissil.hpp"
#include "CanhaoOrbital.hpp"
#include <iostream>
int main(){
    char a;
    int id=0;
    BaseMilitar base;
    while(std::cin >> a){
      double energia;
      double intensidade;
      double gravidade;
      int misseis;
      double saude;
      switch (a)
      {
      case 'c':{
        std :: cin >> energia >> intensidade ; 
        Canhao *c=new Canhao(id,energia,intensidade);
        base.adicionarDefesa(c);
        id++;
        break;
      }
      case 'o':{
        std :: cin >> energia >> intensidade >> gravidade; 
        CanhaoOrbital *o= new CanhaoOrbital(id,energia,intensidade,gravidade);
        base.adicionarDefesa(o);
        id++;
      }
      case 'm':{
        std :: cin >> energia >> misseis;
        LancadorMissil *m=new LancadorMissil(id,energia,misseis);
        base.adicionarDefesa(m);
        id++;
      }
      case 'd':{
        std :: cin >> saude;
        base.defender(saude);
      }
      default:{
        base.~BaseMilitar();
        return 0;
      }
        
      }


     
    }
}