#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    for (int i = 0; i < name.length(); i++) {
        cout << name[i] << endl;
    }
    return 0;
}

