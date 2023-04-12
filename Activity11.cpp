#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number between 1 and 7: ";
    cin >> num;
    if (num == 1) {
        cout << "It's Monday." << endl;
    } else if (num == 2) {
        cout << "It's Tuesday." << endl;
    } else if (num == 3) {
        cout << "It's Wednesday." << endl;
    } else if (num == 4) {
        cout << "It's Thursday." << endl;
    } else if (num == 5) {
        cout << "It's Friday." << endl;
    } else if (num == 6) {
        cout << "It's Saturday." << endl;
    } else if (num == 7) {
        cout << "It's Sunday." << endl;
    } else {
        cout << "Invalid input." << endl;
    }
    return 0;
}

