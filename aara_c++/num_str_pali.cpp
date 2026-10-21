#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, original, reverse = 0, digit;
    string str, rev = "";

    // Number palindrome
    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        cout << "Number is palindrome" << endl;
    else
        cout << "Number is not palindrome" << endl;

    // String palindrome
    cout << "Enter a string: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    if (str == rev)
        cout << "String is palindrome" << endl;
    else
        cout << "String is not palindrome" << endl;

    return 0;
}
