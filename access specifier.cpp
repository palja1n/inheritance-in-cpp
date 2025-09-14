#include <iostream>
using namespace std;

class Animal {
    public:
    string colour = "Blue";
    void type(){
        cout << "Aquatic Animal\n";
    }
};

class Habitat {
    public:
    string environment = "Ocean";
    protected:
    void location(){
        cout << "Lives in water\n";
    }
};

class Fish: public Animal, public Habitat {
    private:
    string mammal = "Whale";
};

int main() {
    Fish myFish;
    myFish.type();             
    myFish.location();       
    cout << myFish.colour << " " << myFish.environment << " " << myFish.mammal << "\n";
    return 0;
}

/*
Output:
ERROR!
/tmp/s7XvQXogig/main.cpp: In function 'int main()':
/tmp/s7XvQXogig/main.cpp:29:20: error: 'void Habitat::location()' is protected within this context
   29 |     myFish.location();
      |     ~~~~~~~~~~~~~~~^~
/tmp/s7XvQXogig/main.cpp:16:10: note: declared protected here
   16 |     void location(){
      |          ^~~~~~~~
ERROR!
/tmp/s7XvQXogig/main.cpp:30:73: error: 'std::string Fish::mammal' is private within this context
   30 | myFish.colour << " " << myFish.environment << " " << myFish.mammal << "\n";
      |                                                             ^~~~~~

/tmp/s7XvQXogig/main.cpp:23:12: note: declared private here
   23 |     string mammal = "Whale";
      |            ^~~~~~


=== Code Exited With Errors ===

        */
