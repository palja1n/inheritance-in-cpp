# Inheritance in C++

Name: Pal Jain  
PRN: 24070123067  
Class: ENTC A3  

## Aim
To study different types of inheritance in C++ such as single, multiple, multilevel, and hierarchical inheritance, along with the role of access specifiers.

## Theory
In Object-Oriented Programming, **inheritance** is the process of creating new classes from existing ones.  
The existing class is called the **base class (parent class)**, and the new class is called the **derived class (child class)**.  
Inheritance promotes code reusability, reduces duplication, and establishes relationships between classes.

A derived class automatically contains the members of the base class, except for constructors, destructors, and private members (though private members can be accessed through public/protected functions of the base class).


### **Types of Inheritance in C++**

* **Single Inheritance**
  In single inheritance, one base class is inherited by a single derived class.
  This allows the derived class to reuse and extend the functionality of the base class, promoting code reusability and reducing redundancy.  

* **Multiple Inheritance**
  In multiple inheritance, a single derived class inherits from **two or more base classes**.
  This enables the derived class to combine and use functionalities from multiple base classes, allowing more complex relationships and feature combinations.


* **Multilevel Inheritance**
  In multilevel inheritance, a class is derived from another derived class, forming a chain of inheritance.
  This demonstrates how properties and methods are passed down through multiple layers of inheritance, helping to organize and structure code in a hierarchical manner.


* **Hierarchical Inheritance**
  In hierarchical inheritance, **multiple derived classes inherit from a single base class**.
  This structure allows one common base class to provide shared properties and methods to several specialized derived classes, improving code organization and avoiding duplication.



### Access Specifiers:
- **Public** – Accessible everywhere.
- **Private** – Accessible only within the class where it is defined.
- **Protected** – Accessible in the base class and derived class, but not outside.

---

## Syntax Examples

### Single Inheritance
```cpp
class Base {
    // base class members
};

class Derived : public Base {
    // derived class members
};
````

### Multiple Inheritance

```cpp
class Base1 {
    // base1 members
};

class Base2 {
    // base2 members
};

class Derived : public Base1, public Base2 {
    // derived class members
};
```

### Multilevel Inheritance

```cpp
class Base {
    // base members
};

class Intermediate : public Base {
    // intermediate members
};

class Derived : public Intermediate {
    // derived members
};
```

### Hierarchical Inheritance

```cpp
class Base {
    // base members
};

class Derived1 : public Base {
    // derived1 members
};

class Derived2 : public Derived1 {
    // derived2 members
};

class Derived3 : public Derived1 {
    // derived3 members
};
```

### Access Specifier Example

```cpp
class Base {
public:
    int publicVar;      // accessible everywhere
protected:
    int protectedVar;   // accessible in base + derived
private:
    int privateVar;     // accessible only in base
};

class Derived : public Base {
    // publicVar → remains public
    // protectedVar → remains protected
    // privateVar → not accessible
};
```

---

## Programes

---

### **Program 1: Single Inheritance**

#### **Logic:**

This program demonstrates single inheritance where the `Fish` class is derived from the `Animal` class.
The base class `Animal` contains a colour attribute and a function `type()` to display the type of animal.
The derived class `Fish` adds an additional member `mammal`.
The program shows how the derived class can use both its own members and the base class members.

#### **Algorithm:**

1. Start
2. Define a class `Animal` with a member `colour` initialized as "Blue" and a function `type()` to print "Aquatic Animal".
3. Define a derived class `Fish` which inherits from `Animal` and adds a member `mammal` initialized as "Whale".
4. In `main()`, create an object of class `Fish`.
5. Call the `type()` function of the base class using the derived class object.
6. Print the `colour` (from base class) and `mammal` (from derived class).
7. End


---

### **Program 2: Multiple Inheritance**

#### **Logic:**

This program demonstrates multiple inheritance where the `Chocolate` class inherits from two base classes: `Brand` and `Type`.
The `Brand` class stores brand information and has a function `show()` to display "Premium Brand".
The `Type` class stores the type of chocolate and has a function `display()` to display "Chocolate Type".
The `Chocolate` class combines these features and adds its own member `flavor`.
This shows how a derived class can combine data and functions from more than one base class.

#### **Algorithm:**

1. Start
2. Define a class `Brand` with a string member `name` initialized to "Lindt" and a function `show()` to print "Premium Brand".
3. Define a class `Type` with a string member `kind` initialized to "Dark" and a function `display()` to print "Chocolate Type".
4. Define a derived class `Chocolate` inheriting from both `Brand` and `Type`.
5. Add a string member `flavor` initialized to "Hazelnut" in the `Chocolate` class.
6. In `main()`, create an object of `Chocolate`.
7. Call `show()` (from `Brand`) and `display()` (from `Type`) using the `Chocolate` object.
8. Print `name`, `kind`, and `flavor`.
9. End

---

### **Program 3: Multilevel Inheritance**

#### **Logic:**

This program demonstrates multilevel inheritance.
The base class `Vehicle` has functions to `start()` and `stop()` the vehicle.
The `Car` class inherits from `Vehicle` and adds a member `brand` to store the car brand.
The `ElectricCar` class is derived from `Car` and adds a member `batteryCapacity`.
This forms a chain of inheritance showing how properties and functions pass from one level to the next.

#### **Algorithm:**

1. Start
2. Define base class `Vehicle` with functions `start()` and `stop()`.
3. Define a derived class `Car` with a member `brand`, and a constructor to take input for brand.
4. Define another derived class `ElectricCar` that inherits from `Car` and adds a member `batteryCapacity`.
5. In `main()`, create an object of `ElectricCar`.
6. Call `start()`, display `brand` and `batteryCapacity`, and call `stop()`.
7. End

---

### **Program 4: Hierarchical Inheritance**

#### **Logic:**

This program demonstrates hierarchical inheritance where multiple classes are derived from a common base class `Vehicle`.
The `LandVehicle` class inherits from `Vehicle` and stores common properties like `fuelType`.
Further, specialized classes `Car` and `Bike` inherit from `LandVehicle`.
Each derived class has its own specific members:

* `Car` has `seatCount`.
* `Bike` has `engineCapacity`.
  All classes share the common functionality of `start()` and `stop()` from `Vehicle`.
  It shows how one base class can provide common functionality to many specialized derived classes.

#### **Algorithm:**

1. Start
2. Define base class `Vehicle` with functions `start()` and `stop()`.
3. Define intermediate class `LandVehicle` inheriting from `Vehicle`, which takes `fuelType` as input.
4. Derive class `Car` from `LandVehicle`, adding a member `seatCount` and a `display()` function.
5. Derive class `Bike` from `LandVehicle`, adding a member `engineCapacity` and a `display()` function.
6. In `main()`, create objects of `Car` and `Bike`.
7. Call `start()`, `display()`, and `stop()` for both `Car` and `Bike` objects.
8. End


---

### Program 5: Access Specifiers

### **Logic:**

This program demonstrates the effect of different access specifiers (`public`, `protected`, and `private`) in inheritance.
The base class `Habitat` has a function `location()` declared as `protected`, which means it cannot be accessed directly from `main()`.
The derived class `Fish` provides a public wrapper function `showLocation()` to safely access the protected `location()` function.
Similarly, a private member `mammal` in `Fish` cannot be accessed directly from `main()`.
Instead, a public function `showMammal()` is provided to display the private data.
This shows how access specifiers control member visibility and access across base and derived classes, enforcing encapsulation and proper access control. 

---

## Conclusion

Inheritance allows classes to reuse and extend features of other classes, reducing duplication and improving code structure.

* **Single inheritance** creates a base-to-derived relationship.
* **Multiple inheritance** combines features from different classes.
* **Multilevel inheritance** forms a chain of inheritance.
* **Hierarchical inheritance** shares one base class across many derived classes.

Access specifiers (**public, private, protected**) control how members are shared.
Overall, inheritance makes programs more modular, organized, and powerful.
