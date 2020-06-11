#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int x = (rand() % 100 + 1);
    int min = 0;
    int max = 101;
    int time = 0;
    int input;
    input = 0;
    while(true) {;
        cout << min << " < x < " << max << "\n";
        cin >> input;
        if (input < x && input > min){
            min = input;
            time++;
        }
        if (input > x && input < max){
            max = input;
            time++;
        }
        if (input == x){
            cout << "µª¹ï¤F";
            time++;
            break;
        }
    }
}