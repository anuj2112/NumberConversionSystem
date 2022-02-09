#include "Hexadecimal.h"

Hexadecimal::Hexadecimal(string hexadecimal_number)
{
        this->hexadecimal_number = hexadecimal_number;
}
Hexadecimal::~Hexadecimal()
{
    //dtor
}
    void Hexadecimal::to_decimal()
    {
        int is_correct_format = this->is_hexadecimal_number_in_correctFormat();
        if(is_correct_format == 1){
        int hexadecimal_number_length = hexadecimal_number.size();
        double power = 1;
        long decimal_number = 0;

        for (int i = hexadecimal_number_length - 1; i >= 0; i--)
        {

            if (hexadecimal_number[i] >= '0' && hexadecimal_number[i] <= '9')
            {
                decimal_number += (hexadecimal_number[i] - 48) * power;

                power = power * 16;
            }
            if (hexadecimal_number[i] >= 'A' && hexadecimal_number[i] <= 'F')
            {

                decimal_number += (hexadecimal_number[i] - 55) * power;

                power = power * 16;
            }
        }
        cout<<"Equivalent Decimal number is: "<<decimal_number;
        }
        else{
            cout<<"Enter valid hexadecimal number";
        }

    }
    int Hexadecimal::is_hexadecimal_number_in_correctFormat()
    {
        int i = 0;
        while (i < hexadecimal_number.size())
        {
            if ((hexadecimal_number[i] >= '0' && hexadecimal_number[i] <= '9') || (hexadecimal_number[i] >= 'A' && hexadecimal_number[i] <= 'F'))
            {
                i++;
                continue;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
    void Hexadecimal::to_binary()
    {
        int i = 0;

        int is_correct_format = is_hexadecimal_number_in_correctFormat();
        if (is_correct_format == 1)
        {
            cout<<"Equivalent Binary number is: ";
            while (i < hexadecimal_number.size())
            {

                switch (hexadecimal_number[i])
                {
                case '0':
                    cout << "0000";
                    break;
                case '1':
                    cout << "0001";
                    break;
                case '2':
                    cout << "0010";
                    break;
                case '3':
                    cout << "0011";
                    break;
                case '4':
                    cout << "0100";
                    break;
                case '5':
                    cout << "0101";
                    break;
                case '6':
                    cout << "0110";
                    break;
                case '7':
                    cout << "0111";
                    break;
                case '8':
                    cout << "1000";
                    break;
                case '9':
                    cout << "1001";
                    break;
                case 'A':
                    cout << "1010";
                    break;
                case 'B':
                    cout << "1011";
                    break;
                case 'C':
                    cout << "1100";
                    break;
                case 'D':
                    cout << "1101";
                    break;
                case 'E':
                    cout << "1110";
                    break;
                case 'F':
                    cout << "1111";
                    break;
                default:
                    cout << "Please enter valid number";
                    break;
                }
                i++;
            }
            cout<<endl;
        }
        else
        {
            cout << "Incorrect number Format"<<endl;
        }
    }
    void Hexadecimal::to_octal()
    {
        if(is_hexadecimal_number_in_correctFormat() == 1){
        long octal_number[50];
        long remainder;
        int i = 0;
        int hexadecimal_number_length = hexadecimal_number.size();
        double power = 1;
        long decimal_number = 0;

        for (int i = hexadecimal_number_length - 1; i >= 0; i--)
        {

            if (hexadecimal_number[i] >= '0' && hexadecimal_number[i] <= '9')
            {
                decimal_number += (hexadecimal_number[i] - 48) * power;

                power = power * 16;
            }
            if (hexadecimal_number[i] >= 'A' && hexadecimal_number[i] <= 'F')
            {

                decimal_number += (hexadecimal_number[i] - 55) * power;

                power = power * 16;
            }
        }
        while (decimal_number != 0)
        {
            octal_number[i] = decimal_number % 8;
            decimal_number = decimal_number / 8;
            i++;
        }
        cout << "\nEquivalent Octal number is: ";
        for (i = (i - 1); i >= 0; i--)
        {
            cout << octal_number[i];
        }
        cout << endl;
    }
        else{
            cout<<"Enter valid hexadecimal number"<<endl;
        }
    }

