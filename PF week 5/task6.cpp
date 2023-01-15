#include <iostream>

using namespace std;

int main()
{
    int poolSize;
    int P1 = 0;
    int P2 = 0;
    int water1;
    int water2;
    int percentage;
    int total;
    float hours = 0;
    cout << "Enter the pool size : ";
    cin >> poolSize;
    cout << "Enter the flow rate of pipe 1 : ";
    cin >> P1;
    cout << "Enter the flow rate of pipe 2 : ";
    cin >> P2;
    cout << "Enter the time the worker is absent : ";
    cin >> hours;
    water1 = P1 * hours;
    water2 = P2 * hours;
    total = water1 + water2;
    if(total < poolSize)
    {
        percentage = water1 * 100 / total;
        cout << "The contribution of pipe 1 : " << percentage <<  endl;
        percentage = 100 - percentage;
        cout << "The contribution of pipe 2 : " << percentage << endl;
        percentage = total * 100 / poolSize;
        cout << "The pool is " << percentage << " % full";
    }
    if(total > poolSize)
    {
        total = total - poolSize;
        cout << "The pool has overflown with " << total << " litre for " << hours << " hours";       
    }
}
