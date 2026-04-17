#include "Jogador.hpp"
Jogador::Jogador(std::string nome, char simbolo)
    : nome(nome), simbolo(simbolo) {}
char Jogador::getSimbolo() const{
    return this->simbolo;
}
std::string Jogador::getNome() const{
    return this->nome;
}