#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, reverse = "";

    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        reverse += str[i];
    }
    if (str == reverse)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}