#include <iostream>
using namespace std;

class B;

class A
{
    int x;

public:
    void getdata()
    {
        cout << "Enter first number: ";
        cin >> x;
    }

    friend void swap(A &, B &);
};

class B
{
    int y;

public:
    void getdata()
    {
        cout << "Enter second number: ";
        cin >> y;
    }

    friend void swap(A &, B &);
};

void swap(A &a, B &b)
{
    int temp;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
    A obj1;
    B obj2;

    obj1.getdata();
    obj2.getdata();

    swap(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "First number: " << obj1.x << endl;
    cout << "Second number: " << obj2.y << endl;

    return 0;
}