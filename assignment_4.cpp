#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Please enter an odd integer. \n";
    cin >> n;
    while (n % 2 == 0){
        cout << "Bad input! Enter an odd integer. \n";
        cin >> n;
    }
    for (int r = 1; r <= n; r++){
        if (r == 1 || r == n){
            for (int c = 1; c <= n; c++){
                cout << "X";
            }
        } else {
            for (int c = 1; c <= n; c++){
                if (c == 1 || c == n){
                    cout << "O";
                } else if ((r == n / 2 + 1) && (c == n / 2 + 1)) {
                    cout << "+";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl; 
    }
    return 0;
}
