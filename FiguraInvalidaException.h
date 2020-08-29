#ifndef FIGURAINVALIDAEXCEPTION_H_
#define FIGURAINVALIDAEXCEPTION_H_

#include <exception>

class FiguraInvalidaException : public std::exception
{
public:
    const char* what() const throw()
    {
        return "Figura invalida";
    }
};

#endif // FIGURAINVALIDAEXCEPTION_H_
