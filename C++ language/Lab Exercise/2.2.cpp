#include <iostream>
using namespace std;

main() {
	//Implicit 
    int a = 10;
    float b = a;  
    
    //explicit
    float x = 7.5;
    int y = (int)x;  

    cout << "Implicit Conversion:";
    cout << "\nInteger a = " << a;
    cout << "\nFloat b = " << b;

    cout << "\n";

    cout << "\nExplicit Conversion:";
    cout << "\nFloat x = " << x;
    cout << "\nInteger y = " << y;
}
