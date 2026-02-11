#include <iostream>
using namespace std;

main() {
    int num = 2;   
    int guess;

    cout << "Guess the number between 1 and 100\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > num)
            cout << "Too high!\n";
        else if (guess < num)
            cout << "Too low!\n";
        else {
            cout << "Correct guess!\n";
            break;
        }
    }
}
