#include <iostream>
using namespace std;

template <class T>
T larger(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y;
    float p, q;
    double m, n;

    cout << "Enter two integer values: ";
    cin >> x >> y;

    cout << "Larger integer: " << larger(x, y);

    cout << "\n\nEnter two float values: ";
    cin >> p >> q;

    cout << "Larger float: " << larger(p, q);

    cout << "\n\nEnter two double values: ";
    cin >> m >> n;

    cout << "Larger double: " << larger(m, n);

    return 0;
}
