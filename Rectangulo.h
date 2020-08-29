#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Figura.h"

class Rectangulo : public Figura
{
private:
    double base;
    double altura;

public:
    Rectangulo(double base, double altura);

    double area() const;
};

#endif // RECTANGULO_H_
