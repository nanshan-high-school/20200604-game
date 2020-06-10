#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void crand(void);
void think(void);
int comp[4];
bool num[10] = {false};
bool check = true;
int aa,bb,u = 0;
string humen;

int main() {

    cout << "輸入你的答案\n";
    cin >> humen;

    srand(time(NULL));
    int a,b;
    
    crand();

    int ans[4],cans[4],aa,bb;
    string x;

    for(int i = 3; i >= 0; i--){
        cans[i] = comp[i];
    }

    while(true){
        cout << "\n輸入你猜的答案\n";
        cin >> x;

        a = 0;
        b = 0;

        for(int i = 3; i >= 0; i--){
            ans[i] = x[i] - '0';
        }

        for(int k = 0; k <= 3; k++){
            if(ans[k] == cans[k]){
                a++;
            }
        }
        if(a == 4){
            break;
        }
        for(int j = 0; j <= 3; j++){
            for(int k = 0; k <= 3; k++){
                if(ans[j] == cans[k]){
                    b++;
                }
            }
        }
        b -= a;
        cout << a << "a" << b << "b\n";
        
        if(a == 4){
            cout << "你贏了";
            break;
        }

        aa = 0;
        bb = 0;

        crand();
        think();
    }
}

void crand(void){
    comp[0] = (rand() % 10);
    comp[1] = (rand() % 10);
    comp[2] = (rand() % 10);
    comp[3] = (rand() % 10);
    if(check == true || u == 2){
        while(true){
            if(num[comp[0]] == true){
                comp[0] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[0] == comp[1] || num[comp[1]] == true){
                comp[1] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[2] == comp[0] || comp[2] == comp[1] || num[comp[2]] == true){
                comp[2] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[3] == comp[0] || comp[3] == comp[1] || comp[3] == comp[2] || num[comp[3]] == true){
                comp[3] = (rand() % 10);
            }else{
                break;
            }
        }
    }else if(u == 1){
        while(true){
            if(num[comp[0]] == false){
                comp[0] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[0] == comp[1] || num[comp[1]] == false){
                comp[1] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[2] == comp[0] || comp[2] == comp[1] || num[comp[2]] == true){
                comp[2] = (rand() % 10);
            }else{
                break;
            }
        }
        while(true){
            if(comp[3] == comp[0] || comp[3] == comp[1] || comp[3] == comp[2] || num[comp[3]] == true){
                comp[3] = (rand() % 10);
            }else{
                break;
            }
        }
    }
}

void think(void){
    aa = 0;
    bb = 0;
    for(int k = 0; k <= 3; k++){
        if(humen[k] - '0' == comp[k]){
            aa++;
        }
    }
    for(int j = 0; j <= 3; j++){
        for(int k = 0; k <= 3; k++){
            if(humen[j] - '0' == comp[k]){
                bb++;
            }
        }
    }

    bb -= aa;

    if(aa + bb == 0){
        num[comp[0]] = true;
        num[comp[1]] = true;
        num[comp[2]] = true;
        num[comp[3]] = true;
        check = false;
        u++;
    }
    cout << "\n電腦猜你的\n" << comp[0] << comp[1] << comp[2] << comp[3] << "\n" << aa << "a" << bb << "b\n";

    if(aa == 4){
        cout << "\n\n\n你輸了\n\n\n";
    }
}
