#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num >= 0) {
        cout << "You entered a positive number or zero." << endl;
    } else {
        cout << "You entered a negative number." << endl;
    }
    return 0;
}

