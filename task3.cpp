//•	Create a base class Animal with data member name Create a derived class Mammal inheriting Animal with data member numberOfLegs. 	Create a derived class Dog inheriting Mammal with member functions to bark.	Demonstrate object creation and access to members of all classes//



#include <iostream>
#include <string>

using namespace std;

// Base class Animal
class Animal {
public:
    string name;
    Animal(string n) : name(n) {}
};

// Derived class Mammal inheriting Animal
class Mammal : public Animal {
public:
    int numberOfLegs;
    Mammal(string n, int legs) : Animal(n), numberOfLegs(legs) {}
};

// Derived class Dog inheriting Mammal
class Dog : public Mammal {
public:
    Dog(string n, int legs) : Mammal(n, legs) {}
    void bark() {
        cout << name << " is barking: Woof! Woof!" << endl;
    }
};

int main() {
    // Creating a Dog object
    Dog myDog("Buddy", 4);

    // Accessing and displaying details
    cout << "Name: " << myDog.name << ", Legs: " << myDog.numberOfLegs << endl;
    myDog.bark();

    return 0;
}
