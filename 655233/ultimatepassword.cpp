#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    int input;
    int max, min;
    cin >> max;
    cin >> min;
    int password = rand() % max + 1;
    while (true) {
        cin >> input;
        if (input == password) {
            cout << "correct";
            break;
        } else if (input < password) {
            min = input;
        } else if (input > password) {
            max = input;
        }
        cout << "max:" << max << " min" << min << "\n";
    }
}
