#include <iostream>
#include "Decimal.h"
#include "Binary.h"
#include "Conversions.h"
#include "Hexadecimal.h"
#include "Octal.h"
using namespace std;
long get_binary_number_input()
{
    long binary_number;
    cout<<"Enter Binary Number \t";
    cin>>binary_number;
    return binary_number;

}
int get_decimal_number_input()
{
    int decimal_number;
    cout<<"Enter Decimal Number \t";
    cin>>decimal_number;
    return decimal_number;

}
long get_octal_number_input()
{
    long octal_number;
    cout<<"Enter Octal Number \t";
    cin>>octal_number;
    return octal_number;

}
string get_hexadecimal_number_input()
{
    string hexadecimal_number;
    cout<<"Enter Hexadecimal Number \t";
    cin>>hexadecimal_number;
    return hexadecimal_number;

}
void binary_conversions(){
    int ch;
 while(1){
    cout<<"Enter 1 for binary to decimal conversions"<<endl;
    cout<<"Enter 2 for binary to octal conversions"<<endl;
    cout<<"Enter 3 for binary to hexadecimal conversions"<<endl;
    cout<<"Enter 4 to get back to main menu"<<endl;
    cin>>ch;
    switch(ch){

    case 1:
        {
            Binary binary_to_decimal(get_binary_number_input());
            Conversions *c = &binary_to_decimal;
            c->to_decimal();
            cout<<endl;
            break;
        }
    case 2:
        {
            Binary binary_to_octal(get_binary_number_input());
            Conversions *c = &binary_to_octal;
            c->to_octal();
            cout<<endl;
            break;
        }
    case 3:
        {

        Binary binary_to_hexadecimal(get_binary_number_input());
        Conversions *c = &binary_to_hexadecimal;
        c->to_hexadecimal();
        cout<<endl;
        break;
        }
    default: return;

    }
 }


}
void decimal_conversions(){
    int ch;
 while(1){
    cout<<"Enter 1 for decimal to binary conversions"<<endl;
    cout<<"Enter 2 for decimal to octal conversions"<<endl;
    cout<<"Enter 3 for decimal to hexadecimal conversions"<<endl;
    cout<<"Enter 4 to get back to main menu"<<endl;
    cin>>ch;
    switch(ch){

    case 1:
        {
           Decimal decimal_to_binary(get_decimal_number_input());
           Conversions *c1 = &decimal_to_binary;
           c1->to_binary();
           cout<<endl;
           break;
        }

    case 2:
        {
           Decimal decimal_to_octal(get_decimal_number_input());
           Conversions *c1 = &decimal_to_octal;
           c1->to_octal();
           cout<<endl;
           break;
        }
    case 3:
        {
           Decimal decimal_to_hexadecimal(get_decimal_number_input());
           Conversions *c1 = &decimal_to_hexadecimal;
           c1->to_hexadecimal();
           cout<<endl;
           break;
        }
    default: return;

    }
 }


}
void octal_conversions(){
    int ch;
 while(1){
    cout<<"Enter 1 for octal to binary conversions"<<endl;
    cout<<"Enter 2 for octal to decimal conversions"<<endl;
    cout<<"Enter 3 for octal to hexadecimal conversions"<<endl;
    cout<<"Enter 4 to get back to main menu"<<endl;
    cin>>ch;
    switch(ch){

    case 1:
        {
            Octal octal_to_binary(get_octal_number_input());
            Conversions *c = &octal_to_binary;
            c->to_binary();
            cout<<endl;
            break;
        }
    case 2:
        {
            Octal octal_to_decimal(get_octal_number_input());
            Conversions *c = &octal_to_decimal;
            c->to_decimal();
            cout<<endl;
            break;
        }
    case 3:
        {
            Octal octal_to_hexadecimal(get_octal_number_input());
            Conversions *c = &octal_to_hexadecimal;
            c->to_hexadecimal();
            cout<<endl;
            break;
        }
    default: return;

    }
 }


}
void hexadecimal_conversions(){
    int ch;
 while(1){
    cout<<"Enter 1 for hexadecimal to binary conversions"<<endl;
    cout<<"Enter 2 for hexadecimal to octal conversions"<<endl;
    cout<<"Enter 3 for hexadecimal to decimal conversions"<<endl;
    cout<<"Enter 4 to get back to main menu"<<endl;
    cin>>ch;
    switch(ch){

    case 1:
        {
            Hexadecimal hex_to_binary(get_hexadecimal_number_input());
            Conversions *c = &hex_to_binary;
            c->to_binary();
            cout<<endl;
            break;
        }
    case 2:
        {
            Hexadecimal hex_to_octal(get_hexadecimal_number_input());
            Conversions *c = &hex_to_octal;
            c->to_octal();
            cout<<endl;
            break;
        }
    case 3:
        {
            Hexadecimal hex_to_decimal(get_hexadecimal_number_input());
            Conversions *c = &hex_to_decimal;
            c->to_decimal();
            cout<<endl;
            break;
        }
    default: return;

    }
 }


}

int main()
{
    int ch;
    cout<<"Welcome to Number conversion system!"<<endl;;
    while(1)
    {
        cout<<"Enter 1 for Decimal Conversions"<<endl;
        cout<<"Enter 2 for Binary Conversions"<<endl;
        cout<<"Enter 3 for Octal Conversions"<<endl;
        cout<<"Enter 4 for Hexadecimal Conversions"<<endl;
        cout<<"Enter 5 to terminate the program "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: decimal_conversions();
                    break;
            case 2: binary_conversions();
                    break;
            case 3: octal_conversions();
                    break;
            case 4: hexadecimal_conversions();
                    break;
            default: exit(0);
        }
    }
    return 0;
}
