#include<iostream>
using namespace std;

class student
{
    public:
    int StudentID;
    string StudentName;
    string CourseName;

    student(int StudentID, string StudentName, string CourseName)
    {
        this->StudentID = StudentID;
        this->StudentName = StudentName;
        this->CourseName = CourseName;
    }

    void display()
    {
        cout<<"------Student Details------"<<endl;
        cout<<"StudentID="<<this->StudentID<<endl;
        cout<<"StudentName="<<this->StudentName<<endl;
        cout<<"CourseName="<<this->CourseName<<endl;
    }
};

int main()
{
    student s1(105, "Riya_Patil", "BTech_CSE");

    s1.display();

    return 0;
}
