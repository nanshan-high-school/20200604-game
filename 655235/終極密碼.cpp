#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int num;
    cout << "�п�J�̤j�Ʀr�G";
    cin >> num;
    int x = ((rand() % 100) + 1);
    int min = 0;
    int max = num + 1;
    int times = 0;
    int now;
    while (true) {
        now = 0;
        cout << min << " < X <" << max << "\n";
        cin >> now;
        if (now < x && now > min) {
            min = now;
            times++;
        } else if (now > x && now < max) {
            max = now;
            times++;
        } else if (now == x) {
            times++;
            break;
        }
    }

    cout << "YES!!";
    cout << "�A��F�G" << times << "��";
}