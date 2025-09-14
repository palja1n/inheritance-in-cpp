#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
    void stop() {
        cout << "Vehicle stopped" << endl;
    }
};

class Car : public Vehicle {
public:
    string brand;

    Car() {
        cout << "Enter Car Brand: ";
        cin >> brand;
    }
};

class ElectricCar : public Car {
public:
    int batteryCapacity;

    ElectricCar() {
        cout << "Enter Battery Capacity (in kWh): ";
        cin >> batteryCapacity;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar myElectricCar;
    myElectricCar.start();
    myElectricCar.display();
    myElectricCar.stop();

    return 0;
}

/*
Output:
Enter Car Brand: Tata
Enter Battery Capacity (in kWh): 130
Vehicle started
Brand: Tata
Battery Capacity: 130 kWh
Vehicle stopped
*/
