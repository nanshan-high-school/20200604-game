#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void think(void);
int comp[4];

int main() {
    srand(time(NULL));
    int a,b;
    think();

    int ans[4];
    string x;

    while(true){
        cout << "輸入猜的答案\n";
        cin >> x;
        a = 0;
        b = 0;
        for(int i = 3; i >= 0; i--){
            ans[i] = x[i] - '0';
        }
        for(int k = 0; k <= 3; k++){
            if(ans[k] == comp[k]){
                a++;
            }
        }
        if(a == 4){
            break;
        }
        for(int j = 0; j <= 3; j++){
            for(int k = 0; k <= 3; k++){
                if(ans[j] == comp[k]){
                    b++;
                }
            }
        }
        b -= a;
        cout << a << "a" << b << "b\n";
    }
    cout << "對了";
}

void think(void){
    comp[0] = (rand() % 10);
    comp[1] = (rand() % 10);
    comp[2] = (rand() % 10);
    comp[3] = (rand() % 10);
    while(true){
        if(comp[0] == comp[1]){
            comp[1] = (rand() % 10);
        }else{
            break;
        }
    }
    while(true){
        if(comp[2] == comp[0] || comp[2] == comp[1]){
            comp[2] = (rand() % 10);
        }else{
            break;
        }
    }
    while(true){
        if(comp[3] == comp[0] || comp[3] == comp[1] || comp[3] == comp[2]){
            comp[3] = (rand() % 10);
        }else{
            break;
        }
    }
}
