#include <iostream>
#include <cmath>

using namespace std;

float calcHeight(float, float);

main()
{
  float angle;
  float height;
  float distance;

  while(true)
  {
    cout << "Enter the distance to the tree : ";
    cin >> distance;
    cout << "Enter the angle : ";
    cin >> angle;

    height = calcHeight(distance, angle);
    cout << "The height of the tree is : " << height << endl;
  }
}

float calcHeight(float distance, float angle)
{
  float height = distance * tan(angle * (3.14159/180));
  return height;
}
