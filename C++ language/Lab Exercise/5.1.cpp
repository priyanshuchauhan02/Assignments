#include <iostream>
using namespace std;

main() {
    int n;
    int arr[100];
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average << "\n";
}
