#include <iostream>
using namespace std;

    int main (){
    int num;
    cout << "Enter a category of a hurricane (1 through 5):\n";
    cout << ">";
    cin >> num;
        if (num==1){
            cout << "The windspeed is 74-95 mph.\n";
        }
        else if (num==2){
            cout << "The windspeed is 96-110 mph.\n";
        }
        else if (num==3){
            cout << "The windspeed is 111-130 mph.\n";
        }
        else if (num==4){
            cout << "The windspeed is 131-155 mph.\n";
        }
        else {
            cout << "The windspeed exceeds 155 mph.\n";
}
return 0;
}
