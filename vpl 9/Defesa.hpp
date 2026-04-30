#ifndef DEFESA_H
#define DEFESA_H

class Defesa
{
private:
    int _id;
    double _energia;

protected:
    void _consumirEnergia(double qtd);

public:
    virtual void atacar(double &danoAcumulado) = 0;
    Defesa(int id, double energia);
    virtual ~Defesa();
};

#endif
