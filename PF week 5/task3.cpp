#include <iostream>

using namespace std;

bool symmetrical(int number);

main()
{
  int number;
  bool isTrue;

  cout << "Enter the number : "; 
  cin >> number;

  isTrue = symmetrical(number);
  if(isTrue == true)
  {
    cout << "The number is symmetrical ";
  } 
  if(isTrue == false)
  {
    cout << "The number is unsymmetrical";
  }
}

bool symmetrical(int number)
{
  int digit;

  digit = number % 10;
  number = number / 100;

  if(number == digit)
  {
    return true;
  }

  if(number != digit)
  {
    return false;
  }
  return 0;
}