#include <iostream>
using namespace std;

class Vehicle
{
public:
    string company, name;

    void input()
    {
        cout << "Enter company name: ";
        cin >> company;

        cout << "Enter vehicle name: ";
        cin >> name;
    }

    void show()
    {
        cout << "\nCompany: " << company;
        cout << "\nVehicle: " << name;
    }
};

class Car : public Vehicle
{
public:
    int seats;

    void getCar()
    {
        input();

        cout << "Enter seating capacity: ";
        cin >> seats;
    }

    void displayCar()
    {
        show();
        cout << "\nSeats: " << seats;
    }
};

class Bike : public Vehicle
{
public:
    int cc;

    void getBike()
    {
        input();

        cout << "Enter engine capacity: ";
        cin >> cc;
    }

    void displayBike()
    {
        show();
        cout << "\nEngine capacity: " << cc << " CC";
    }
};

int main()
{
    Car c;
    Bike b;

    cout << "CAR DETAILS\n";
    c.getCar();

    cout << "\nBIKE DETAILS\n";
    b.getBike();

    cout << "\n--- Vehicle Records ---\n";

    cout << "\nCar:";
    c.displayCar();

    cout << "\n\nBike:";
    b.displayBike();

    return 0;
}
