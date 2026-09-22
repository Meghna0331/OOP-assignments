#include<iostream>
using namespace std;

class employee
{
    public:
    int employeeID;
    int experience;
    string employeeName;
    string jobRole;

    void display()
    {
        cout<<"----Employee Details----"<<endl;
        cout<<"EmployeeID:"<<employeeID<<endl;
        cout<<"Experience:"<<experience<<" years"<<endl;
        cout<<"EmployeeName:"<<employeeName<<endl;
        cout<<"JobRole:"<<jobRole<<endl;
    }
};

int main()
{
    employee e1;

    e1.employeeID=245678;
    e1.experience=3;
    e1.employeeName="Aarav_Sharma";
    e1.jobRole="Software_Developer";

    e1.display();

    return 0;
}
