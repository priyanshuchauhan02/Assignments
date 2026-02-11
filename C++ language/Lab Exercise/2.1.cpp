#include <iostream>
using namespace std;

main() {
    int age = 20;
    float height = 5.8;
    char grade = 'A';

    const float PI = 3.14;

    int nextYearAge = age + 1;
    float circleArea = PI * 5 * 5;

    cout << "Age: " << age;
    cout << "\nAge next year: " << nextYearAge;
    cout << "\nHeight: " << height;
    cout << "\nGrade: " << grade;
    cout << "\nArea of circle: " << circleArea;
}
