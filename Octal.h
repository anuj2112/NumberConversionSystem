#ifndef OCTAL_H
#define OCTAL_H
#include "Conversions.h"

class Octal : public Conversions
{
    public:
        /** Default constructor */
        Octal(long octal_number);
        /** Default destructor */
        virtual ~Octal();

        long octal_number;
        void to_binary();
        void to_decimal();
        void to_hexadecimal();

    protected:

    private:
};

#endif // OCTAL_H
