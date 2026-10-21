#include <iostream>
#include <cmath>
using namespace std;

void AREA(float r)
{
    cout << "Area of Circle = " << 3.14 * r * r << endl;
}

void AREA(float l, float b)
{
    cout << "Area of Rectangle = " << l * b << endl;
}

void AREA(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Invalid Triangle!" << endl;
    }
    else
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area of Triangle = " << area << endl;
    }
}

int main()
{
    float r, l, b, a, x, y;

    cout << "Enter radius of circle: ";
    cin >> r;
    AREA(r);

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    AREA(l, b);

    cout << "Enter three sides of triangle: ";
    cin >> a >> x >> y;
    AREA(a, x, y);

    return 0;
}