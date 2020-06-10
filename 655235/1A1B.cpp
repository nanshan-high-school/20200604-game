#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int num[4];
    int check[4];
    for (int i = 0; i < 4; i++) {
        num[i] = rand() % 10;
        check[i] = num[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            do {
                if (num[i] == check[j] && i != j) {
                    num[i] = rand() % 10;
                    check[i] = num[i];
                }
            } while (num[i] == check[j] && i != j);
        }
    }

    int times = 0;
    while (true) {
        times++;
        string input;
        cin >> input;
        int now[4] = { 0 };
        for (int i = 0; i < 4; i++) {
            now[i] = input[i] - '0';
        }
        int a = 0;
        int b = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (now[i] == num[j] && i == j) {
                    a++;
                } else if (now[i] == num[j] && i != j) {
                    b++;
                }

            }
        }
        if (a == 4) {
            break;
        }
        cout << a << "A" << b << "B\n";
    }
    cout << "success,共花了：" << times << "次";

}