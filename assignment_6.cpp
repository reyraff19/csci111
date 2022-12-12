#include <iostream>
using namespace std;

int twoPart(int n){
    if (n <= 0 || n % 2 == 1)return 1;
    return 2 * twoPart(n / 2); 
}

int main(){
    cout << twoPart(16) << endl;
    cout << twoPart(666) << endl;
    cout << twoPart(777) << endl;
    return 0;
}

    
