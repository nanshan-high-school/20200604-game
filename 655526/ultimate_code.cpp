#include <iostream>
using namespace std;

int main () {
    int code, min, max;
    cout << "請輸入密碼：";
    cin >> code;
    cout << "請輸入範圍最小值：";
    cin >> min;
    cout << "請輸入範圍最大值：";
    cin >> max;

    bool yes = 0;
    while (yes == 0) {
        int input;
        cout << min << " ~ " << max << endl;
        cout << "請輸入欲猜測的數字：";
        cin >> input;
        if (input == code) {
            yes = 1;
            cout << "你猜到ㄌ給你一個讚owob";
        }
        else if (input < code) {
            min = input;
        }
        else {
            max = input;
        }
    }
}
