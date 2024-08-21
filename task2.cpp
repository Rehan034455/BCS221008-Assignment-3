#include <iostream>
#include <string>

using namespace std;

// Base class Shape
class Shape {
protected:
    string color;

public:
    // Constructor for Shape class
    Shape(string col) : color(col) {
        cout << "Creating a shape with color: " << color << endl;
    }

    // Function to set color
    void setColor(string col) {
        color = col;
    }

    // Function to get color
    string getColor() const {
        return color;
    }
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
private:
    float length;
    float breadth;

public:
    // Constructor for Rectangle class
    Rectangle(string col, float len, float brd) : Shape(col), length(len), breadth(brd) {
        cout << "Creating a rectangle with length: " << length << " and breadth: " << breadth << endl;
    }

    // Function to calculate area
    float calculateArea() const {
        return length * breadth;
    }

    // Function to calculate perimeter
    float calculatePerimeter() const {
        return 2 * (length + breadth);
    }

    // Function to display rectangle details
    void displayDetails() const {
        cout << "\nRectangle Details:\n";
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    string color;
    float length, breadth;

    // Getting user input
    cout << "Enter the color of the rectangle: ";
    cin >> color;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Creating an object of Rectangle and demonstrating constructor chaining
    Rectangle rect(color, length, breadth);

    // Display rectangle details
    rect.displayDetails();

    return 0;
}
