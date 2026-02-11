#include <iostream>
using namespace std;

int x = 10;  

void display() {
    int x = 20;   
    cout << "Local x = " << x << "\n";
}

main() {
    cout << "Global x = " << x << "\n";
    display();
    cout << "Global x again = " << x << "\n";
}
