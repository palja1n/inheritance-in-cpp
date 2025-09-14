#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle Started" << endl;
    }
    void stop() {
        cout << "Vehicle Stopped" << endl;
    }
};

class LandVehicle : public Vehicle {
public:
    string fuelType;
    LandVehicle() {
        cout << "Enter Fuel Type (Petrol/Diesel/Electric): ";
        cin >> fuelType;
    }
};

class Car : public LandVehicle {
    int seatCount;
public:
    Car() {
        cout << "Enter Number of Seats in Car: ";
        cin >> seatCount;
    }

    void display() {
        cout << "Car - Fuel Type: " << fuelType << ", Seats: " << seatCount << endl;
    }
};

class Bike : public LandVehicle {
    int engineCapacity;
public:
    Bike() {
        cout << "Enter Engine Capacity (in cc): ";
        cin >> engineCapacity;
    }

    void display() {
        cout << "Bike - Fuel Type: " << fuelType << ", Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    cout << "Car Information:" << endl;
    Car myCar;
    myCar.start();
    myCar.display();
    myCar.stop();

    cout << "\nBike Information:" << endl;
    Bike myBike;
    myBike.start();
    myBike.display();
    myBike.stop();

    return 0;
}

/*
Output:
Car Information:
Enter Fuel Type (Petrol/Diesel/Electric): Petrol
Enter Number of Seats in Car: 5
Vehicle Started
Car - Fuel Type: Petrol, Seats: 5
Vehicle Stopped

Bike Information:
Enter Fuel Type (Petrol/Diesel/Electric): Diesel
Enter Engine Capacity (in cc): 2000
Vehicle Started
Bike - Fuel Type: Diesel, Engine Capacity: 2000 cc
Vehicle Stopped
*/
