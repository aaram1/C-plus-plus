#include <iostream>
using namespace std;

int main()
{
    int n, temp, digit, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}