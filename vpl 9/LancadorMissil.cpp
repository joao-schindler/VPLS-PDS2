#include "LancadorMissil.hpp"

LancadorMissil::LancadorMissil(int id, double energia, int misseis)
    : Defesa(id,energia) , _misseis(misseis), _energiaLocal(energia) {}

void LancadorMissil::atacar(double &danoAcumulado){
    if(this->_misseis >= 1 && this->_energiaLocal >= 5){ 
        this->_energiaLocal -= 5;
        this->_misseis -= 1;
        _consumirEnergia(5); 
        danoAcumulado += 40;
    }
}