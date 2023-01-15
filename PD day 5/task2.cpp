#include <iostream>

using namespace std;

float mili(float length, float width, float height);
float centi(int length, int width, int height);
float meter(int length, int width, int height);
float kilo(float length, float width, float height);

main()
{
    string unit;
    int length;
    int width;
    int height;
    float result;
    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the width : ";
    cin >> width;
    cout << "Enter the height : ";
    cin >> height;
    cout << "Enter the units : ";
    cin >> unit;
    if(unit == "centimeters")
    {
        result = centi(length, width, height);
        cout << "The volume is : " << result << " cubic " << unit;
    }
    if(unit == "millimeters")
    {
        result = mili(length, width, height);
        cout << "The volume is : " << result << " cubic " << unit;
    }
    if(unit == "meters")
    {
        result = meter(length, width, height);
        cout << "The volume is : " << result << " cubic " << unit;
    }
    if(unit == "kilometers")
    {
        result = kilo(length, width, height);
        cout << "The volume is : " << result << " cubic " << unit;
    }
}

float centi(int length, int width, int height)
{
    length = length * 100;
    width = width * 100;
    height = height * 100;
    int ans = (length * width * height) / 3;
    return ans;
}

float mili(float length, float width, float height)
{
    length = length * 1000;
    width = width * 1000;
    height = height * 1000;
    float ans = (length * width * height) / 3;
    return ans;
}

float meter(int length, int width, int height)
{
    int ans = (length * width * height) / 3;
    return ans;
}

float kilo(float length, float width, float height)
{
    length = length / 1000;
    width = width / 1000;
    height = height / 1000;
    float ans = (length * width * height) / 3;
    return ans;
}