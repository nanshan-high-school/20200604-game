#include <iostream>
using namespace std;

int main () {
    char code[4];
    cout << "�п�J�D�ءG";
    for (int i = 0; i < 4; i++) {
        cin >> code[i];
    }
    bool yes = 0;
    while (yes == 0) {
        char input[4];
        int a = 0, b = 0;
        cout << "�п�J���q�����Ʀr�G";
        for (int i = 0; i < 4; i++) {
            cin >> input[i];
        }
        for (int i = 0; i < 4; i++) {
            if (input[i] == code[i]) {
                a++;
            }
            else {
                for (int j = 0; j < 4; j++) {
                    if (input[i] == code[j]) {
                        b++;
                    }
                }
            }
        }
        if (a == 4) {
            yes = 1;
            cout << "�A�q��{���A�@���gowob";
        }
        else {
            cout << a << "A" << b << "B" << endl;
        }
    }
}
