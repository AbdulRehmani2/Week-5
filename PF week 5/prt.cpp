#include <iostream>
#include <cmath>

using namespace std;

main()
{
  float number1;
  float number2;
  float total;

  cout << "Enter the first number : ";
  cin >> number1;
  cout << "Enter the second number : ";
  cin >> number2;

  total = max(number1, number2);
  cout << "The greater number is " << total << endl;

  total = min(number1, number2);
  cout << "The smaller number is " << total << endl;

  total = sqrt(number1);
  cout << "The square root of first number is : " << total << endl;

  total = pow(number1, number2);
  cout << "The power of first number to the second number is : " << total << endl;

  total = cbrt(number1);
  cout << "The cube root of number 1 is : " << total << endl;

  total = ceil(number1);
  cout << total << endl;

  total = floor(number1);
  cout << total;
}