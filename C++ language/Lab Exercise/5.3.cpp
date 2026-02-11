#include <iostream>
#include <string>
using namespace std;

main() {
    string str;
    int flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";
}
