#ifndef CANHAO_H
#define CANHAO_H
#include "Defesa.hpp"

class Canhao: public Defesa{
private:
    double _intensidade;
    double _energiaLocal; 
public:
    virtual void atacar (double &danoAcumulado) override;
    Canhao(int id, double energia, double intensidade);
};

#endif
