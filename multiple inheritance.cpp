#include <iostream>
using namespace std;

class Brand {
    public:
    string name = "Lindt";
    void show(){
        cout << "Premium Brand\n";
    }
};

class Type {
    public:
    string kind = "Dark";
    void display(){
        cout << "Chocolate Type\n";
    }
};

class Chocolate: public Brand, public Type {
    public:
    string flavor = "Hazelnut";
};

int main() {
    Chocolate myChocolate;
    myChocolate.show();       
    myChocolate.display();   
    cout << myChocolate.name << " " << myChocolate.kind << " " << myChocolate.flavor;
    return 0;
}

/*
Output:
Premium Brand
Chocolate Type
Lindt Dark Hazelnut
*/
