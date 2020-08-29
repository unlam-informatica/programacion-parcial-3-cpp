/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/

#ifndef FIGURA_H_
#define FIGURA_H_

#include "FiguraInvalidaException.h"

class Figura
{
public:
    virtual ~Figura(){};
    virtual double area() const = 0;
};

#endif // FIGURA_H_
