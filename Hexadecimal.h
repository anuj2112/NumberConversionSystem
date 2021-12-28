#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H

#include<string.h>
#include<iostream>
#include "Conversions.h"

using namespace std;
class Hexadecimal : public Conversions
{
    public:
        string hexadecimal_number;

        Hexadecimal(string hexadecimal_number);

        /** Default destructor */
        virtual ~Hexadecimal();
        void to_decimal();
        void to_octal();
        void to_binary();
        int is_hexadecimal_number_in_correctFormat();

    protected:

    private:
};

#endif // HEXADECIMAL_H
