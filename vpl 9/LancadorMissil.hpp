#include "Defesa.hpp"
#ifndef LANCADORMISSIL_H
#define LANCADORMISSIL_H
class LancadorMissil : public Defesa{
    private:
    int _misseis;
    public:
    virtual void atacar (double &danoAcumulado) override;
    LancadorMissil(int id, double energia,int misseis);
};
#endif