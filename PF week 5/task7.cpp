#include <iostream>

using namespace std;

string digit(int number);

int main()
{
    int number;
    int digit1;
    int digit2;
    string ones;
    cout << "Enter the number : ";
    cin >> number;
    digit1 = number % 10;
    digit2 = (number/10) % 10;
    if(digit2 == 2)
    {
        number = number - 20;
        ones = digit(number);
        cout << "twenty " << ones << endl;
    }
    if(digit2 == 3)
    {
        number = number - 30;
        ones = digit(number);
        cout << "thirty " << ones << endl;
    }
    if(digit2 == 4)
    {
        number = number - 40;
        ones = digit(number);
        cout << "fourty " << ones << endl;
    }
    if(digit2 == 5)
    {
        number = number - 50;
        ones = digit(number);
        cout << "fifty " << ones << endl;
    }
    if(digit2 == 6)
    {
        number = number - 60;
        ones = digit(number);
        cout << "sixty " << ones << endl;
    }
    if(digit2 == 7)
    {
        number = number - 70;
        ones = digit(number);
        cout << "seventy " << ones << endl;
    }
    if(digit2 == 8)
    {
        number = number - 80;
        ones = digit(number);
        cout << "eighty " << ones << endl;
    }
    if(digit2 == 9)
    {
        number = number - 90;
        ones = digit(number);
        cout << "ninty " << ones << endl;
    }
}

string digit(int number)
{
    string word;
    if(number == 1)
    {
        word = "one";
        return word;
    }
    if(number == 2)
    {
        word = "two";
        return word;
    }
    if(number == 3)
    {
        word = "three";
        return word;
    }
    if(number == 4)
    {
        word = "four";
        return word;
    }
    if(number == 5)
    {
        word = "five";
        return word;
    }
    if(number == 6)
    {
        word = "six";
        return word;
    }
    if(number == 7)
    {
        word = "seven";
        return word;
    }
    if(number == 8)
    {
        word = "eight";
        return word;
    }
    if(number == 9)
    {
        word = "nine";
        return word;
    }
}