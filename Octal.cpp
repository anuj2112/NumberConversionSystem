#include "Octal.h"
#include<iostream>
#include<math.h>
using namespace std;
Octal::Octal(long octal_number)
{
    this->octal_number = octal_number;
}

Octal::~Octal()
{
    //dtor
}

void Octal::to_binary()
{
    int decimalNum = 0, binaryNum = 0, count = 0;

    while(octal_number != 0)
    {
        decimalNum += (octal_number%10) * pow(8,count);
        ++count;
        octal_number/=10;
    }
    count = 1;
    while (decimalNum != 0)
    {
        binaryNum += (decimalNum % 2) * count;
        decimalNum /= 2;
        count *= 10;
    }
    cout<<"Equivalent binary number is:"<<binaryNum;

}


//method to covert octal to decimal
void Octal::to_decimal()
{

    int dec=0,i=0,r=0;
    while(octal_number!=0)
    {
        r=octal_number % 10;
        dec=dec+r*pow(8,i);
        octal_number=octal_number/10;
        i++;
    }
    cout<<"Equivalent decimal number is: "<<dec;
}



//method to convert octal to hexadecimal
void Octal::to_hexadecimal()
{
    long z=1,i,temp,binary=0,hexa[20],rem;
    for(i=0; i<20; i++)
    {
        hexa[i]=0;
    }
    cout<<" Equivalent hexadecimal number is: ";
    /* Convertirng octal to binary*/
    while(octal_number>0)
    {
        temp=octal_number%10;
        octal_number/=10;
        for(int y=0; y<3; y++)
        {
            rem=temp%2;
            temp/=2;
            binary+=rem*z;
            z*=10;
        }
    }

    for(i=0; binary>0; i++)
    {
        for(int y=0; y<4; y++)
        {
            rem=binary%10;
            binary/=10;
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
}
