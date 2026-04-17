#include "Partida.hpp"
Partida::Partida(Jogador jogador1, Jogador jogador2) : jogador1(jogador1), jogador2(jogador2)
{
    atual = &this->jogador1;
}
Jogador &Partida::getJogadorAtual()
{
    return *atual;
}
void Partida::executarJogada(int linha, int coluna){
    
    char simbolo_do_atual = atual->getSimbolo();

    if(tabuleiro.validaJogada(linha, coluna, simbolo_do_atual) == true){
        tabuleiro.fazerJogada(linha, coluna, simbolo_do_atual);
        
        if(atual == &jogador1){
            atual = &jogador2;
        } else {
            atual = &jogador1;
        }
    } else {
        std::cout << "Jogada invalida!\n";
    }
}
char Partida::statusPartida()
{
    return tabuleiro.verificarEstadoPartida();
}
void Partida::exibirPartida()
{
    tabuleiro.imprimir();
}