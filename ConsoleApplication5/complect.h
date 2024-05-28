#pragma once

struct Complect
{
    double a{};
    double b{};
};
Complect summa(Complect&, Complect&);
Complect difference(Complect&, Complect&);
Complect multiplication(Complect&, Complect&);
Complect division(Complect&, Complect&);
void print_complex(Complect&);

