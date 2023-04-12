#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) {
        cout << "You entered a positive number: " << num << endl;
    } else {
        cout << "You did not enter a positive number." << endl;
    }
    return 0;
}

