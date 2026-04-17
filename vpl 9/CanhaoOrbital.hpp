#include "Canhao.hpp"
#ifndef CANHAORBITAL_H
#define CANHAORBITAL_H
class CanhaoOrbital: public Canhao{
private:
   double _multiplicadorGravitacional;
public:
   virtual void atacar (double &danoAcumulado) override;
   CanhaoOrbital(int id, double energia , double intensidade , double multiplicadorGravitacional );
};
#endif