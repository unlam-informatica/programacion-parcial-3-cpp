#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "Figura.h"

class Triangulo: public Figura
{
private:
    double base;
    double altura;

public:
    Triangulo(double base, double altura);

    double area() const;
};

#endif // TRIANGULO_H_
