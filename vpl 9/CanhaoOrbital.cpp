#include "CanhaoOrbital.hpp"
#include <iostream>

CanhaoOrbital::CanhaoOrbital(int id, double energia , double intensidade , double multiplicadorGravitacional):
   Canhao(id,energia,intensidade) , _multiplicadorGravitacional(multiplicadorGravitacional){}

void CanhaoOrbital::atacar (double &danoAcumulado){

    double temp = danoAcumulado;
    
    Canhao::atacar(danoAcumulado); 

    double danoCausadoPeloPai = danoAcumulado - temp;
    
    if(danoCausadoPeloPai > 0){
        danoAcumulado += (danoCausadoPeloPai * this->_multiplicadorGravitacional) - danoCausadoPeloPai;
        std::cout << "Ataque Orbital realizado!" << std::endl;
    }
}