#include "Canhao.hpp"
#include "Canhao.hpp"
Canhao::Canhao(int id, double energia, double intensidade) 
    : Defesa(id, energia), _intensidade(intensidade), _energiaLocal(energia) {}

void Canhao::atacar (double &danoAcumulado){
    if (this->_energiaLocal >= 10) { 
        this->_energiaLocal -= 10;
        _consumirEnergia(10); 
        danoAcumulado += this->_intensidade;
    }
}