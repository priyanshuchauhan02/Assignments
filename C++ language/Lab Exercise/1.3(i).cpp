#include <iostream>
using namespace std;

void calculateArea() {
    int length, width, area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    cout << "Area of rectangle = " << area;
}

main() {
    calculateArea(); 
}
