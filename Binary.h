#ifndef BINARY_H
#define BINARY_H
#include "Conversions.h"


class Binary : public Conversions
{
    public:
        /** Default constructor */
        Binary(long long binary_number);
        /** Default destructor */
        virtual ~Binary();
        long long binary_number;
        void to_decimal();
        void to_octal();
        void to_hexadecimal();
        int is_binary_number();
    protected:

    private:
};

#endif // BINARY_H
