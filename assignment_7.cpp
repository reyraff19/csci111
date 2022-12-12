#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
    int arr[7][7];
    int maxSum = 0, col = 0;
    for(int r = 0; r < 7; r++){
        for(int c = 0; c < 7; c++){
            arr[r][c] = rand()%(100 - 1) + 1;
            if(arr[r][c] % 2 == 0){
                arr[r][c] = arr[r][c] * 2;
            }else{
                arr[r][c] = -1 * arr[r][c];
            }
            cout << setw(5);
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
    for(int r = 0; r < 7; r++){
        maxSum += arr[r][0];
    }
    for(int c = 1; c < 7; c++){
        int sum = 0;
        for(int r = 0; r < 7; r++){
            sum += arr[r][0];
        }
        if(sum > maxSum){
            maxSum = sum;
            col = c;
        }
    }
    cout << "Column " << col << " as the largest sum: " << maxSum << endl; 
    return 0;
}
                
