#include "BaseMilitar.hpp"
#include "LancadorMissil.hpp"
#include "CanhaoOrbital.hpp"
#include <iostream>
int main(){
    char a;
    int id;
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
        std :: cin >> id >> energia >> intensidade ; 
        Canhao *c=new Canhao(id,energia,intensidade);
        base.adicionarDefesa(c);
        break;
      }
      case 'o':{
        std :: cin >> id >> energia >> intensidade >> gravidade; 
        CanhaoOrbital *o= new CanhaoOrbital(id,energia,intensidade,gravidade);
        base.adicionarDefesa(o);
        break;
      }
      case 'm':{
        std :: cin >> id >> energia >> misseis;
        LancadorMissil *m=new LancadorMissil(id,energia,misseis);
        base.adicionarDefesa(m);
        break;
      }
      case 'd':{
        std :: cin >> saude;
        base.defender(saude);
        break;
      }
      default:{
        return 0;
      }
        
      }


     
    }
}