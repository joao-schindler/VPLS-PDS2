#include "LancadorMissil.hpp"
void LancadorMissil::atacar(double &danoAcumulado){
  if(this->_misseis>=1){
    this->_misseis-=1;
    _consumirEnergia(5);
    danoAcumulado+=40;
  }
}
LancadorMissil::LancadorMissil(int id, double energia, int misseis): Defesa(id,energia) , _misseis(misseis){}