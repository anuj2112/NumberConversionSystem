#include "Octal.h"
#include<iostream>
#include<math.h>
using namespace std;
Octal::Octal(long octal_number){
    this->octal_number = octal_number;
}

Octal::~Octal()
{
    //dtor
}

 void Octal::to_binary()
    {
        long int i=0,rem;
        string binary_num= " ";
        while(octal_number)
        {
            rem = octal_number % 10;
            octal_number = octal_number / 10;
            switch(rem)
            {
            case 0:binary_num+="000";
                    break;
            case 1:binary_num+="001";
                    break;
            case 2:binary_num+="010";
                    break;
            case 3:binary_num+="011";
                    break;
            case 4:binary_num+="100";
                    break;
            case 5:binary_num+="101";
                    break;
            case 6:binary_num+="110";
                    break;
            case 7:binary_num+="111";
                    break;
            }
        i++;
        }
    cout<<"Equivalent binary number is:"<<binary_num;

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
    for(i=0;i<20;i++){
    hexa[i]=0;
    }
    cout<<" Hexadecimal of the given number is : ";
    /* Convertirng octal to binary*/
    while(octal_number>0)
    {
        temp=octal_number%10;
        octal_number/=10;
        for(int y=0;y<3;y++)
        {
             rem=temp%2;
             temp/=2;
             binary+=rem*z;
             z*=10;
        }
    }
    /*Comverting Binary to Hexadecimal*/
    for(i=0;binary>0;i++)
    {
        for(int y=0;y<4;y++)
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
