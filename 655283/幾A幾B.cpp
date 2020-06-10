#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main() {

    bool close = false;
    srand ( time(NULL) );
    vector <int> num;
    vector <int> guevec;

    int a = 0;
    int b = 0;
    int x = 0;
    bool pass = false;

    x = rand () % 10;
    num.push_back (x);

    do {
        x = rand () % 10;
        if (x != num.at (0)) {

            num.push_back (x);
            pass = true;
        }

    } while (pass == false);

    pass = false;
    
    do {
        x = rand () % 10;
        if (x != num.at (0)) {

            if (x != num.at (1)) {
                num.push_back (x);
                pass = true;
            }
        }

    } while (pass == false);

    pass = false;
    
    do {
        x = rand () % 10;
        if (x != num.at (0)) {
            if (x != num.at (1)) {
                if (x != num.at (2)) {

                    num.push_back (x);
                    pass = true;
                }
            }
        }

    } while (pass == false);

    string  guess;
    cout << "guess : ";
    cin >> guess;

    for (int i = 0; i < 4; i++) {
        int change = guess[i] - 48;
        guevec.push_back(change);
    }

    for (int i = 0; i < 4; i++) {
        if (guevec.at (i) == num.at (i)) {
            a++;
        }  
    }

    for (int  j = 0; j < 4; j++) {
        do {
            if (guevec.at (0) == num.at (j)) {
                b++;
            }
            break;
        } while (j != 0);

        do {
            if (guevec.at (1) == num.at (j)) {
                b++;
            }
            break;
        } while (j != 1);

        do {
            if (guevec.at (2) == num.at (j)) {
                b++;
            }
            break;
        } while (j != 2);
        
        do {
            if (guevec.at (3) == num.at (j)) {
                b++;
            }
            break;
        } while (j != 3);
    }

    cout << "original number : ";
    
    for (auto n : num ) {
        cout << n;
    }

    cout << endl <<a << " : A" << endl;
    cout <<b << " : B";
}
