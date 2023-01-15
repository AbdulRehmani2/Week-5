#include <iostream>

using namespace std;

int add(int, int);
float division(float, float);
int isGreater(int, int);

main()
{
  int number1;
  int number2;
  float total;
  cout << "Enter the first number : ";
  cin >> number1;
  cout << "Enter the second number : ";
  cin >> number2;
  total = add(number1, number2);
  cout << "The sum is " << total << endl;
  total = division(number1, number2);
  cout << "The result of division is "<< total << endl;
  total = isGreater(number1, number2);
  cout << "The greater number is " << total;
  
}

int add(int number1, int number2)
{
  int sum = number1 + number2;
  return sum;
}

float division(float number1, float number2)
{
  float result = number1 / number2;
  return result;
}

int isGreater(int number1, int number2)
{
  if(number1 > number2)
  {
    return number1;
  }
  if(number2 > number1)
  {
    return number2;
  }
  return 0;
  

}  
