#include <iostream>
using namespace std;

int main() {
    int num1, num2, quotient;
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
    quotient = num1 / num2;
    cout << "The quotient of " << num1 << " / " << num2 << " is " << quotient << "." << endl;
    return 0;
}

