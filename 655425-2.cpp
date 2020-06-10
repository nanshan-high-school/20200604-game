#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int x[4];
    srand(time(NULL));
    for (int i = 0; i < 4; i++){
        x[i] = rand();
        x[i] = x[i] % 10;
        cout << x[i] << "\n";
    }

    int ans[4];
    int a = 0;
    int b = 0; 
    while(true){
        for(int i = 0; i < 4; i++){
            cin >> ans[i];
        } 
        for (int i = 0; i < 4; i++){
            for (int k = 0; k < 4; k++){
                if (ans[i] == x[k]){
                    b += 1;
                    if (i == k){
                        a += 1;
                        b -= 1;
                    }
                }
            }
        }
        if (a != 0 && b != 0){
            cout << a << "a" << b << "b\n";
        } else if (a == 4) {
            cout << "yes\n";
            break;
        }
    }   
}