#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll_number;
    float marks;

    // Function to input student data
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student data
    void display() const {
        cout << "Name: " << name << ", Roll Number: " << roll_number << ", Marks: " << marks << endl;
    }

    // Function to write student data to file
    void writeToFile(ofstream &out) const {
        out << name << " " << roll_number << " " << marks << endl;
    }

    // Function to read student data from file
    void readFromFile(ifstream &in) {
        in >> name >> roll_number >> marks;
    }
};

int main() {
    const int studentCount = 5;
    Student students[studentCount];

    // Input student data
    for (int i = 0; i < studentCount; i++) {
        cout << "Enter details
