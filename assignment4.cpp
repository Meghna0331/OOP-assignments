#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollno;
    string course;
    int semester;

    
    student()
    {
        name = "Meghna";
        rollno = 2;
        course = "AIML";
        semester = 1;
    }

    student(string n, int r, string c, int s)
    {
        name = n;
        rollno = r;
        course = c;
        semester = s;
    }

  
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollno << endl;
        cout << "Course : " << course << endl;
        cout << "Semester : " << semester << endl;
        cout << "-----------------------" << endl;
    }
};

int main()
{
    
    student s1;
    student s2("Riya_Patil", 105, "BTech_CSE", 2);

    cout << "Student 1 :" << endl;
    s1.display();

    cout << "Student 2 :" << endl;
    s2.display();

    return 0;
}
