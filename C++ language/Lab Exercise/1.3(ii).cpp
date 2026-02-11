#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea() {
        int area = length * width;
        cout << "Area of rectangle = " << area;
    }
};

main() {
    Rectangle r;   
    r.input();
    r.calculateArea();
}
