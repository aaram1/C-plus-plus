#include <iostream>
using namespace std;

class Shape
{
    int r, l, w;

public:
    Shape(int radius, int length, int width)
    {
        r = radius;
        l = length;
        w = width;
    }

    void display()
    {
        cout << "Perimeter of rectangle: "
             << 2 * (l + w) << endl;

        cout << "Perimeter of circle: "
             << 2 * 3.14 * r << endl;
    }

    ~Shape()
    {
    }
};

int main()
{
    Shape s(5, 10, 6);
    s.display();

    return 0;
}