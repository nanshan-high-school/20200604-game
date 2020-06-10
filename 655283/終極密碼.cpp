#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    bool close = false;
    srand ( time(NULL) );
    int x = rand () % 100 + 1;
    int guess;
    int head = 0;
    int tail = 100;

    do {
        int guess;
        cout << "請猜";
        cin >> guess;

        if (x == guess) {
            cout << "congratulations ! !";
            close = true;
        } else if (guess > x) {
            tail = guess;
            cout << head << "與" << tail << "之間" << endl;
        } else {
            head = guess;
            cout << head << "與" << tail << "之間" << endl;
        }

    } while (close == false);
}
