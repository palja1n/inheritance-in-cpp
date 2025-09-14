#include <iostream>
using namespace std;

class Animal {
    public:
    string colour = "Blue";
    void type(){
        cout << "Aquatic Animal\n";
    }
};

class Fish: public Animal{
    public:
    string mammal= "Whale";
};

int main() {
    Fish myFish;
    myFish.type();
    cout << myFish.colour + " " + myFish.mammal;
    return 0;
}

/*
Output:
Aquatic Animal
Blue Whale
*/
