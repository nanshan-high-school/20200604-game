#include <iostream>
using namespace std;

int main () {
    int code, min, max;
    cout << "�п�J�K�X�G";
    cin >> code;
    cout << "�п�J�d��̤p�ȡG";
    cin >> min;
    cout << "�п�J�d��̤j�ȡG";
    cin >> max;

    bool yes = 0;
    while (yes == 0) {
        int input;
        cout << min << " ~ " << max << endl;
        cout << "�п�J���q�����Ʀr�G";
        cin >> input;
        if (input == code) {
            yes = 1;
            cout << "�A�q��{���A�@���gowob";
        }
        else if (input < code) {
            min = input;
        }
        else {
            max = input;
        }
    }
}
