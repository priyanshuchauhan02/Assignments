#include <iostream>
using namespace std;

main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators: ";
    cout << "\na + b = " << (a + b);
    cout << "\na - b = " << (a - b);
    cout << "\na * b = " << (a * b);
    cout << "\na / b = " << (a / b);
    cout << "\na % b = " << (a % b);

    // Relational Operators
    cout << "\n\nRelational Operators: ";
    cout << "\na > b  = " << (a > b);
    cout << "\na < b  = " << (a < b);
    cout << "\na == b = " << (a == b);
    cout << "\na != b = " << (a != b);
    cout << "\na >= b = " << (a >= b);
    cout << "\na <= b = " << (a <= b);

    // Logical Operators
    bool x = true, y = false;
    cout << "\n\nLogical Operators: ";
    cout << "\nx && y = " << (x && y);
    cout << "\nx || y = " << (x || y);
    cout << "\n!x = " << (!x);

    // Bitwise Operators
    cout << "\n\nBitwise Operators: ";
    cout << "\na & b  = " << (a & b);
    cout << "\na | b  = " << (a | b);
    cout << "\na ^ b  = " << (a ^ b);
    cout << "\na << 1 = " << (a << 1);
    cout << "\na >> 1 = " << (a >> 1);
}
