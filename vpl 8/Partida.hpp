#include "Tabuleiro.hpp"
#include "Jogador.hpp"
#ifndef PARTIDA_H
#define PARTIDA_H
class Partida{
    private:
    Tabuleiro tabuleiro;
    Jogador jogador1;
    Jogador jogador2;
    Jogador* atual;
    public:
    Partida(Jogador jogador1, Jogador jogador2);
    Jogador& getJogadorAtual();
    void executarJogada(int linha, int coluna);
    char statusPartida();
    void exibirPartida();
};
#endif