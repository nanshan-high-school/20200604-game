#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int ans = (rand() % 99) + 1,input = 101,first = 1,last = 100;
    while(true){
        cout << first << "<答案<" << last << "\n";
        cin >> input;
        if(input == ans){
            break;
        }else if(input < first){
            continue;
        }else if(input > last){
            continue;
        }else if(input < ans){
            first = input;
        }else if(input > ans){
            last = input;
        }
    }
    cout << "對了!!";
}
