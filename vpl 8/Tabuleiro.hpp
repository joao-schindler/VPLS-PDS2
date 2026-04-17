#ifndef TABULEIRO_H
#define TABULEIRO_H
class Tabuleiro{
    private:
    char tabuleiro[3][3];
    public:
    Tabuleiro();
    bool validaJogada(int linha, int coluna, char simbolo);
    void fazerJogada(int linha, int coluna, char simbolo);
    char verificarEstadoPartida();
    void imprimir();
};
#endif