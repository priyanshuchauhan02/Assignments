#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int sub(int a, int b) {
        return a - b;
    }

    int mul(int a, int b) {
        return a * b;
    }

    float div(int a, int b) {
        return (float)a / b;
    }
};

main() {
    Calculator calc;   
    int a = 10, b = 5;

    cout << "Addition = " << calc.add(a, b) << "\n";
    cout << "Subtraction = " << calc.sub(a, b) << "\n";
    cout << "Multiplication = " << calc.mul(a, b) << "\n";
    cout << "Division = " << calc.div(a, b) << "\n";
}
