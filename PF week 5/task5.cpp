#include <iostream>

using namespace std;

int main()
{
    int hours;
    int min;
    cout << "Enter the hours : ";
    cin >> hours;
    cout << "Enter the minutes : ";
    cin >> min;
    min = min + 15;
    if(min > 59)
    {
        min = min - 60;
        hours = hours + 1;
        if(hours > 22)
        {
            hours = 0;
        }
    }
    cout << hours << " : " << min << endl; 
}

