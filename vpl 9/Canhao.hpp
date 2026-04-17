#include "Defesa.hpp"
#ifndef CANHAO_H
#define CANHAO_H
class Canhao: public Defesa{
private:
double _intensidade;
public:
virtual void atacar (double &danoAcumulado) override;
Canhao(int id, double energia, double intensidade);
};
#endif
