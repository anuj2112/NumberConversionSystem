#include "Decimal.h"
#include<iostream>
using namespace std;
Decimal::Decimal(int decimal_number)
{
    this->decimal_number = decimal_number;
}

Decimal::~Decimal()
{
    //dtor
}
void Decimal::to_binary(){
    int binary_numbers[100],i;
for(i=0; decimal_number>0; i++)
{
binary_numbers[i]=decimal_number%2; //remainder
decimal_number= decimal_number/2;
}
cout<<"Binary of the given number= ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<binary_numbers[i];//printing array
}
cout<<endl;
}
void Decimal::to_octal(){
    int octal_number[10],j;
for(j=0; decimal_number>0; j++){
    octal_number[j]=decimal_number%8;
    decimal_number= decimal_number/8;
}
cout<<"octal of the given number= ";
for(j=j-1 ;j>=0 ;j--)
{
cout<<octal_number[j];
}
 cout<<endl;
}
void Decimal::to_hexadecimal(){
    char hexaDecimalNum[50];
    int k =0 ,rem;
    while(decimal_number!=0)
    {
        rem = decimal_number%16;
        if(rem<10){
            rem = rem+48;
        }
        else{
            rem = rem+55;
        }
        hexaDecimalNum[k] = rem;
        k++;
        decimal_number = decimal_number/16;
    }
cout<<"Equivalent Hexadecimal Value: "<<endl;
    for(k=k-1; k>=0; k--){
        cout<<hexaDecimalNum[k];}

}
