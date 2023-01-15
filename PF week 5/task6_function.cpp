#include <iostream>

using namespace std;

int percentage(int total, int water);

int main()
{
    int poolSize;
    int P1 = 0;
    int P2 = 0;
    int water1;
    int water2;
    int percent;
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
        percent = percentage(total, water1);
        cout << "The contribution of pipe 1 : " << percent <<  endl;
        percent = percentage(total, water2);
        cout << "The contribution of pipe 2 : " << percent << endl;
        percent = percentage(poolSize, total);
        cout << "The pool is " << percent << " % full";
    }
    if(total > poolSize)
    {
        total = total - poolSize;
        cout << "The pool has overflown with " << total << " litre for " << hours << " hours";       
    }
}

int percentage(int total, int water)
{
    int result = water * 100 / total;
    return result;
}