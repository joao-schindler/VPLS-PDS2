#ifndef LANCADORMISSIL_H
#define LANCADORMISSIL_H
#include "Defesa.hpp"

class LancadorMissil : public Defesa{
private:
    int _misseis;
    double _energiaLocal; 
public:
    virtual void atacar (double &danoAcumulado) override;
    LancadorMissil(int id, double energia, int misseis);
};

#endif