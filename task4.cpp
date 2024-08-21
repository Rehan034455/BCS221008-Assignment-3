// Create a base class Person with data members name and address. Create another
// base class Employee with data members employeeID and salary. Create a derived
// class Teacher inheriting both Person and Employee with additional data member
// subject.Demonstrate object creation and access to members of all classes.
// Discuss the ambiguity problem in multiple inheritance and how to resolve
// it.//

#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
public:
  string name;
  string address;

  Person(string n, string addr) : name(n), address(addr) {}
};

// Base class Employee
class Employee {
public:
  int employeeID;
  double salary;

  Employee(int id, double sal) : employeeID(id), salary(sal) {}
};

// Derived class Teacher inheriting from both Person and Employee
class Teacher : public Person, public Employee {
public:
  string subject;

  Teacher(string n, string addr, int id, double sal, string subj)
      : Person(n, addr), Employee(id, sal), subject(subj) {}

  void displayDetails() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Employee ID: " << employeeID << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Subject: " << subject << endl;
  }
};

int main() {
  // Creating a Teacher object
  Teacher myTeacher("John Doe", "123 Main St", 1001, 50000, "Mathematics");

  // Displaying details
  myTeacher.displayDetails();

  return 0;
}
