#include "Canhao.hpp"
void Canhao::atacar (double &danoAcumulado){
  Canhao::_consumirEnergia(10);
  danoAcumulado=this->_intensidade;
}
Canhao::Canhao(int id, double energia, double intesidade) : Defesa(id,energia) , _intensidade(intesidade)  {}