#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int password = rand() % 100 + 1;

    int num, min = 0, max = 101;
    while (true) {
        cin >> num; 
        if (num == password) {
            cout << "BANG!";
            break;
        } else if (num < password) {
            min = num;
        } else if (num > password) {
            max = num;
        }
        cout << min << " < ? < " << max << "\n"; 
    }
}