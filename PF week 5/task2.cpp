#include <iostream>
#include <cmath>

using namespace std;

float solution1(int, int, int);
float solution2(int, int, int);

main()
{
  int a;
  int b;
  int c;
  float total;

  cout << "Enter the value of a : ";
  cin >> a;
  cout << "Enter the value of b : ";
  cin >> b;
  cout << "Enter the value of c : ";
  cin >> c;
  
  total = solution1(a, b, c);
  cout << total << endl;
  total = solution2(a, b, c);
  cout << total;
  
}

float solution1(int a, int b, int c)
{
  float result;
  float power;
  power = sqrt(b*b - 4*a*c);
  result = -b + power;
  result = result / (2*a);
  return result;
}

float solution2(int a, int b, int c)
{
float result;
  float power;
  power = sqrt(b*b - 4*a*c);
  result = -b - power;
  result = result / (2*a);
  return result;
}