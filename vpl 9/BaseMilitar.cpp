#include "BaseMilitar.hpp"
#include <iostream>
#include <iomanip>
void BaseMilitar::adicionarDefesa(Defesa *d)
{
    if(this->_qtdAtual>=100){
        return ;
    }
    _defesas[this->_qtdAtual] = d;
    _qtdAtual++;
}
void BaseMilitar::defender(double &saudeInimigo)
{

    for (int i = 0; i < this->_qtdAtual; i++)
    {
        double dano_acumulado = 0.00;
        this->_defesas[i]->atacar(dano_acumulado);
        saudeInimigo -= dano_acumulado;
        if (saudeInimigo < 0)
            saudeInimigo = 0;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout <<"Saude Inimigo: " <<  saudeInimigo << std::endl;
}
BaseMilitar::~BaseMilitar()
{
   for(int i=0;i<this->_qtdAtual;i++){
    delete _defesas[i];
   }
}
BaseMilitar::BaseMilitar(){
    this->_qtdAtual=0;
}