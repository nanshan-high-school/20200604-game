#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int password[4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {        
        do {
            password[i] = rand() % 10;
        } while (password[i] == password[i - 1] ||
                 password[i] == password[i - 2] ||
                 password[i] == password[i - 3]      
        );
    }
    
    string input;
    int a = 0, b = 0;
    while (true) {
        cin >> input;
        a = 0;
        b = 0;
        for (int i = 0; i < 4; i++) {
            input[i] -= '0';
        }
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                if (input[j] == password[k]) {
                    if (j == k) {
                        a++;
                    } else {
                        b++;
                    }
                }
            }
        }
        cout << a << "A" << b << "B" << "\n";
        if (a == 4) {
            break;
        }
    }
}
