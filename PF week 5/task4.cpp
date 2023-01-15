#include <iostream>

using namespace std;

string evenish(int number);

main()
{
  int number;
  string result;
  cout << "Enter the number : ";
  cin >> number;
  result = evenish(number);
  cout << result;
}

string evenish(int number)
{
  int digit;
  int result = 0;
  string x;

  digit = number % 10;
  number = number / 10;
  result = result + digit; 

  digit = number % 10;
  number = number / 10;
  result = result + digit;

  digit = number % 10;
  number = number / 10;
  result = result + digit;

  digit = number % 10;
  number = number / 10;
  result = result + digit;

  result = result + number; 
  if(result % 2 == 0)
  {
    x = "Evenish";
    return x;
  }
  if(result % 2 == 1)
  {
    x = "Oddish";
    return x;
  }
  return 0;
}