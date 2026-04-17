#include "LancadorMissil.hpp"
#include "CanhaoOrbital.hpp"
#ifndef BASEMILITAR_H
#define BASEMILITAR_H
class BaseMilitar
{
private:
    Defesa *_defesas[100];
    int _qtdAtual;

public:
    void adicionarDefesa(Defesa *d);
    void defender(double &saudeInimigo);
    ~BaseMilitar();
    BaseMilitar();
};
#endif
