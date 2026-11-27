
#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int Id1 = 101, Id2 = 102;
    float room1 = 2.5, room2 = 3.5;

    cout << "Before swapping:" << endl;
    cout << "Employee IDs: " << Id1 << " " << Id2 << endl;
    cout << "Room numbers: " << room1 << " " << room2 << endl;

    swapValues(Id1, Id2);
    swapValues(room1, room2);

    cout << "\nAfter swapping:" << endl;
    cout << "Employee IDs: " << Id1 << " " << Id2 << endl;
    cout << "Room numbers: " << room1 << " " << room2 << endl;

    return 0;
}
