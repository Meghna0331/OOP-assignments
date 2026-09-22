#include<iostream>
using namespace std;

class employee
{
    public:
    int employeeID;
    string employeeName;
    string designation;
    
    void display()
    {
        cout<<"------Employee Details------"<<endl;
        cout<<"EmployeeID:"<<employeeID<<endl;
        cout<<"EmployeeName:"<<employeeName<<endl;
        cout<<"Designation:"<<designation<<endl;
    }
};

int main()
{
    employee e1;
    
    e1.employeeID=245678;
    e1.employeeName="Riya_Patil";
    e1.designation="HR_Manager";
    
    e1.display();
    
    return 0;
}
