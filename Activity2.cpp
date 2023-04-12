#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) {
        cout << "You entered a positive number: " << num << endl;
    } else if (num < 0) {
        cout << "You entered a negative number: " << num << endl;
    } else {
        cout << "You entered zero." << endl;
    }
    return 0;
}

