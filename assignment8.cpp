#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPersonDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
    }
};

class Employee : public Person
{
protected:
    int employeeID;
    float salary;

public:
    void getEmployeeDetails()
    {
        getPersonDetails();

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails()
    {
        displayPersonDetails();

        cout << "\nEmployee ID: " << employeeID;
        cout << "\nSalary: " << salary;
    }
};

class Manager : public Employee
{
private:
    string department;

public:
    void getManagerDetails()
    {
        getEmployeeDetails();

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManagerDetails()
    {
        displayEmployeeDetails();

        cout << "\nDepartment: " << department;
    }
};

int main()
{
    Manager m1;

    cout << "Enter Manager Details:\n";
    m1.getManagerDetails();

    cout << "\n\nManager Information:";
    m1.displayManagerDetails();

    return 0;
}
