#include <iostream>
using namespace std;

int main() {
    char button;
    int x = 0, y = 0;

    cout << "Press a button (W, A, S, D): ";
    cin >> button;

    if (button == 'W' || button == 'w') {
        y += 1;
    } else if (button == 'S' || button == 's') {
        y -= 1;
    } else if (button == 'A' || button == 'a') {
        x -= 1;
    } else if (button == 'D' || button == 'd') {
        x += 1;
    } else {
        cout << "Invalid input!" << endl;
        return 1;
    }

    cout << "The location of the player is ( " << x << ", " << y << ")" << endl;

    return 0;
}
