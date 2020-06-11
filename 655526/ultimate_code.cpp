#include <iostream>
#include <ctime>
using namespace std;

int main () {
    int code = rand() % 100, min = 0, max = 99, times = 1;

    bool yes = 0;
    while (yes == 0) {
        int input;
        cout << min << " ~ " << max << endl;
        cout << "請輸入欲猜測的數字：";
        cin >> input;
        if (input == code) {
            yes = 1;
            cout << "你猜到ㄌ給你一個讚owob\n你一共花ㄌ" << times << "次猜到正確答案";
        }
        else if (input < code) {
            min = input;
            times++;
        }
        else {
            max = input;
            times++;
        }
    }
}
