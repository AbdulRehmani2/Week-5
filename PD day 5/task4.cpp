#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int requiredHours;
    int days;
    int worker;
    float totalHours;
    cout << "Enter the hours required for the project : ";
    cin >> requiredHours;
    cout << "Enter the days that the firm has : ";
    cin >> days;
    cout << "Enter the number of worker : ";
    cin >> worker;
    totalHours = (days * 10 * worker);
    totalHours = totalHours - 0.1*totalHours;
    totalHours = ceil(totalHours);
    if(totalHours > requiredHours)
    {
        int timeLeft;
        timeLeft = totalHours - requiredHours;
        cout << "Yes! " << timeLeft << " hours left"; 
    }
    if(totalHours < requiredHours)
    {
        int timeNeeded;
        timeNeeded = requiredHours - totalHours;
        cout << "Not enought time! " << timeNeeded << " hours required";
    }
}