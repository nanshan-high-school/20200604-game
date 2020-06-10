#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int x = rand();
    int first = 1;
    int last = 100;
    x = x % 100 + 1;
    cout << x;
    while (true){
        int i;
        cin >> i;
        if (i == x){
            cout << "我們緬懷六四天安門事件中的民族勇士!";
            break;
        }
        else if (i < x){
            first = i;
            cout << first << " < x < " << last << "\n";
        }
        else {
            last = i;
            cout << first << " < x < " << last << "\n";
        }
    }
}