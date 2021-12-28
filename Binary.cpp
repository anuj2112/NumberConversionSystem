#include "Binary.h"
#include<iostream>
#include<math.h>
using namespace std;
Binary::Binary(long long binary_number)
    {
        this->binary_number = binary_number;
    }
Binary::~Binary()
{
    //dtor
}

    int Binary::is_binary_number()
    {
        long binary_number = this->binary_number;
        int division;
        while (binary_number)
        {
            division = binary_number % 10;

            if (division < 1 && division > 0)
            {
                return 0;
            }
            binary_number = binary_number / 10;
        }
        return 1;
    }
    void Binary::to_decimal()
    {
        int remainder;
        int decimal_number = 0;
        int base = 1;
        long binary_number = this->binary_number;
        if (is_binary_number() == 1)
        {
            while (binary_number)
            {
                remainder = binary_number % 10;
                binary_number = binary_number / 10;
                decimal_number += remainder * base;
                base = base * 2;
            }

            cout << "Decimal number is: " << decimal_number;
        }
        else
        {
            cout << "Enter valid binary number";
        }
    }
    void Binary::to_octal()
{
    int octalNumber = 0, decimalNumber = 0, i = 0;
    if (is_binary_number() == 1)
        {
    while(binary_number != 0)
    {
        decimalNumber += (binary_number%10) * pow(2,i);
        ++i;
        binary_number/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    cout << "Equivalent octal number is: " << octalNumber;
    }
    else
    {
            cout << "Enter valid binary number";
    }
}

void Binary::to_hexadecimal()
{
       long z=1,i = 0,temp,hexa[20],rem;

    for(i=0;i<20;i++ ){
        hexa[i] = 0;
    }
    cout<<" Hexadecimal of given number is: ";
    for(i=0;binary_number>0;i++)
    {
        for(int y=0;y<4;y++)
        {
             rem=binary_number%10;
             binary_number/=10;
             hexa[i]+=rem*pow(2,y);
       }
    }
    while(i>0)
    {
        i--;
        if(hexa[i]>9)
            cout<<char(55+hexa[i]);
        else
            cout<<hexa[i];
    }
    cout<<endl;
}
