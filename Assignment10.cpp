
#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "Larger integer: " << larger(10, 20) << endl;

    cout << "Larger float: " << larger(12.5f, 15.5f) << endl;

    cout << "Larger double: " << larger(25.6, 30.5) << endl;

    return 0;
}
