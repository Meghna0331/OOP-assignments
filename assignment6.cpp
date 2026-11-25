#include <iostream>
using namespace std;

class Employee
{
public:

    Employee()
    {
        cout << "Employee record created successfully." << endl;
    }

   
    ~Employee()
    {
        cout << "Employee record removed from memory." << endl;
    }
};

int main()
{
    cout << "Processing started..." << endl;

    {
        Employee e1;
        Employee e2;
    }  

    cout << "Processing completed." << endl;

    return 0;
}
