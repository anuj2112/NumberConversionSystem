#ifndef CONVERSIONS_H
#define CONVERSIONS_H


class Conversions
{
    public:
        /** Default constructor */
        Conversions();
        virtual void to_decimal(){}
        virtual void to_binary() {}
        virtual void to_octal() {}
        virtual void to_hexadecimal() {}
    protected:

    private:
};

#endif // CONVERSIONS_H
