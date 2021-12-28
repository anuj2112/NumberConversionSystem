#ifndef DECIMAL_H
#define DECIMAL_H
#include "Conversions.h"


class Decimal : public Conversions
{
    private: int decimal_number;

    public:
        Decimal(int decimal_number);
        virtual ~Decimal();





	    void to_binary();
        //void display();
        void to_octal();
        //void displayoctal();
        void to_hexadecimal();

};

#endif // DECIMAL_H
