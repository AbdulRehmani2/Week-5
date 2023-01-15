#include <iostream>

using namespace std;

int x = 10;

void myFunc()
{
    cout << "The value of x is " << x << endl;
    int x = 20;
}

main()
{
    myFunc();
    int x = 30;
    cout << "The value of x is : " << x << endl;
    myFunc();
}