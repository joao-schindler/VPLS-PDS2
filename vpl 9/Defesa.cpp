#include "Defesa.hpp"
#include <iostream>
void Defesa::_consumirEnergia(double qtd)
{
    if (this->_energia >= qtd)
    {
        this->_energia -= qtd;
        if (this->_energia < 0)
            this->_energia = 0;
    }
}
Defesa::~Defesa(){
    std::cout << "Defesa "<< this->_id << " desativada." << std::endl;
}
Defesa::Defesa(int id,double energia): _id(id), _energia(energia){}