#include "CanhaoOrbital.hpp"
#include <iostream>
void CanhaoOrbital::atacar (double &danoAcumulado){
  Canhao::atacar(danoAcumulado);
  danoAcumulado+=this->_multiplicadorGravitacional;
  std::cout << "Ataque Orbital realizado!" << std::endl;
}
CanhaoOrbital::CanhaoOrbital(int id, double energia , double intensidade , double multiplicadorGravitacional ):
   Canhao(id,energia,intensidade) , _multiplicadorGravitacional(multiplicadorGravitacional){}

