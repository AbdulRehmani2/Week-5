#include <iostream>
#include <cmath>

using namespace std;

bool greater(int, int);

main()
{
  bool isTrue;
  isTrue = greater(5, 16);
  if(isTrue == true)
  {
    cout << "5 is greater";
  }
  if(isTrue == false)
  {
    cout << "16 is greater";
  }
}

bool greater(int number1, int number2)
{
  if(number1 > number2)
  {
    return true;
  }
  if(number2 > number1)
  {
    return false;
  }
  return 0;
}