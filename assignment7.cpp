#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
    string contact;

public:
    void getPersonDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter contact: ";
        cin >> contact;
    }

    void displayPersonDetails()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nContact: " << contact;
    }
};

class Student : public Person
{
private:
    int rollNo;
    string branch;

public:
    void getStudentDetails()
    {
        getPersonDetails();

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void displayStudentDetails()
    {
        displayPersonDetails();

        cout << "\nRoll Number: " << rollNo;
        cout << "\nBranch: " << branch;
    }
};

int main()
{
    Student s1;

    cout << "Enter Student Details:\n";
    s1.getStudentDetails();

    cout << "\n\nStudent Information:";
    s1.displayStudentDetails();

    return 0;
}
