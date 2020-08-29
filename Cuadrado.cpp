#include "Cuadrado.h"
#include "FiguraInvalidaException.h"

Cuadrado::Cuadrado(double _lado): lado(_lado)
{
    if(_lado <= 0)
    {
        throw FiguraInvalidaException();
    }
}

double Cuadrado::area() const
{
    return this->lado * this->lado;
};
