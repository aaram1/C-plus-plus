#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
protected:
    int rollNo;
    char name[50];

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
    }
};

class Exam : public Student
{
protected:
    int marks[6];

public:
    void getMarks()
    {
        cout << "\nEnter marks in six subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\nMarks in six subjects:\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": "
                 << marks[i] << endl;
        }
    }
};

class Result : public Exam
{
    int total;

public:
    void calculate()
    {
        total = 0;
        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();

    cout << "\n----- STUDENT RESULT -----\n";
    r.displayResult();

    return 0;
}