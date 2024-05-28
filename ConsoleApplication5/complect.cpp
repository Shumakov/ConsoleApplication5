#include <iostream>
#include "complect.h"

Complect summa(Complect& x, Complect& y)
{
    Complect z{ x.a + y.a, x.b + y.b };

    return z;
}
Complect difference(Complect& x, Complect& y)
{
    Complect z{ x.a - y.a, x.b - y.b };

    return z;
}
Complect multiplication(Complect& x, Complect& y)
{
    Complect z{ (x.a * y.a) - (x.b * y.b), (x.a * y.b) + (x.b * y.a) };

    return z;
}
Complect division(Complect& x, Complect& y)
{
    Complect z{ (x.a * y.a) + (x.b * y.b) / (y.a * y.a) + (y.b * y.b), (y.a * x.b) - (x.a * y.b) / (y.a * y.a) + (y.b * y.b) };

    return z;
}
void print_complex(Complect& c)
{
    std::cout << "z = " << c.a << " + " << c.b << "i; \n\n";
}