#include <iostream>
using namespace std;

class Media
{
protected:
    char title[50];
    char publication[50];

public:
    virtual void read()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter publication: ";
        cin >> publication;
    }

    virtual void show()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Book : public Media
{
    int pages;

public:
    void read()
    {
        Media::read();

        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void show()
    {
        Media::show();

        cout << "Number of pages: " << pages << endl;
    }
};

class Tape : public Media
{
    float time;

public:
    void read()
    {
        Media::read();

        cout << "Enter playing time (in minutes): ";
        cin >> time;
    }

    void show()
    {
        Media::show();

        cout << "Playing time: " << time << " minutes" << endl;
    }
};

int main()
{
    Media *ptr;
    Book b;
    Tape t;

    cout << "Enter Book Details:" << endl;
    ptr = &b;
    ptr->read();
    ptr->show();

    cout << "\nEnter Tape Details:" << endl;
    ptr = &t;
    ptr->read();
    ptr->show();

    return 0;
}