#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    char s = '$';
    int day = 0;
    double salary;
    double first_day = 0.005;
    cout << "Day" << setw(3) << " " << setw(1) << "Amount:" << "\n";
    while (salary <= 10000){
        salary = first_day * 2;
        first_day = salary;
        day =  day + 1;
    cout << fixed << setprecision(2);
    cout << setw(6) << left << day << setw(1) << s << setw(10) << right << salary << "\n"; 
    }
return 0;
}
    
