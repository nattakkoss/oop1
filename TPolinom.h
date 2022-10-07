#ifndef TPOLINOM_H
#define TPOLINOM_H

#include "number.h"
#include <iostream>

class TPolinom {
    number a, b, c;
public:
    TPolinom(number, number, number);

    number value(number);

    int roots(number *);

    friend std::ostream &operator<<(std::ostream &, TPolinom &);
};


#endif //TPOLINOM_H
