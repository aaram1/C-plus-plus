
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }

    Complex operator++()
    {
        Complex temp;
        temp.real = real + 1;
        temp.imag = imag + 1;
        return temp;
    }

    Complex operator--()
    {
        Complex temp;
        temp.real = real - 1;
        temp.imag = imag - 1;
        return temp;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = ++c1;
    cout << "After Increment: ";
    c3.display();

    c3 = --c2;
    cout << "After Decrement: ";
    c3.display();

    c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();

    c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();

    return 0;
}
