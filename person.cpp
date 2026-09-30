#include <iostream>
#include <string>
using namespace std;

const int SIZE = 10;

class Person
{
    string name;
    int age;
    string address;

    float basic;
    float hra;
    float da;
    float ta;
    float grossSalary;

    void calculateSalary()
    {
        hra = 0.20f * basic;
        da = 0.50f * basic;
        ta = 1500.0f;
        grossSalary = basic + hra + da + ta;
    }

public:

    Person()
    {
        name = "Unknown";
        age = 0;
        address = "Unknown";
        basic = hra = da = ta = grossSalary = 0;
    }

    Person(string n, int a, string addr, float b)
    {
        name = n;
        age = a;
        address = addr;
        basic = b;
        calculateSalary();
    }

    static inline int youngestAge(Person arr[], int n)
    {
        int min = arr[0].age;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].age < min)
                min = arr[i].age;
        }

        return min;
    }

    static inline int eldestAge(Person arr[], int n)
    {
        int max = arr[0].age;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].age > max)
                max = arr[i].age;
        }

        return max;
    }

    void displaySalarySlip()
    {
        cout << "\nSALARY SLIP\n";
        cout << "Name         : " << name << endl;
        cout << "Age          : " << age << endl;
        cout << "Address      : " << address << endl;
        cout << "Basic Pay    : " << basic << endl;
        cout << "HRA          : " << hra << endl;
        cout << "DA           : " << da << endl;
        cout << "TA           : " << ta << endl;
        cout << "Gross Salary : " << grossSalary << endl;
    }
};

int main()
{
    Person p[SIZE] = {
        Person("Amit", 22, "Kolkata", 25000),
        Person("Riya", 20, "Delhi", 30000),
        Person("Rahul", 25, "Mumbai", 28000),
        Person("Priya", 19, "Chennai", 32000),
        Person("Suman", 24, "Kolkata", 27000),
        Person("Ankit", 21, "Patna", 35000),
        Person("Sneha", 23, "Pune", 29000),
        Person("Arjun", 26, "Jaipur", 40000),
        Person("Neha", 18, "Agartala", 26000),
        Person("Rohan", 27, "Bangalore", 38000)
    };

    cout << "Youngest Age: "
         << Person::youngestAge(p, SIZE) << endl;

    cout << "Eldest Age: "
         << Person::eldestAge(p, SIZE) << endl;

    for (int i = 0; i < SIZE; i++)
    {
        p[i].displaySalarySlip();
    }

    return 0;
}