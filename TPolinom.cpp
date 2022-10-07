#include "TPolinom.h"
#include "math.h"
#define EPSILON 0.00001
TPolinom::TPolinom(number x, number y, number z) {
    a = x;
    b = y;
    c = z;
}

number TPolinom::value(number x) {
    return a * x * x + b * x + c;
}

int TPolinom::roots(number *x)
{
    number d = b*b - 4*a*c;
    if (d>EPSILON) {
        x[0] = (-b + sqrt(d))/2*a;
        x[1] = (-b - sqrt(d))/2*a;
        return 2;
    }
    if (d >= -EPSILON  && d<= EPSILON){
        x[0]= (-b + sqrt(d))/2*a;
        return 1;
    }
    return 0;
}

std::ostream &operator<<(std::ostream &ostream, TPolinom &p) {
    ostream << p.a << "x^2+" << p.b << "x+" << p.c;
    return ostream;
}
