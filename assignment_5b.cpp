#include <iostream>
#include <cmath>
using namespace std;

void areaPerimeter(double a, double b, double c, double &perimeter, double &area){
    if ((a + b > c) && (b + c > a) && (a + c > b)){
        perimeter = a + b + c;
        double s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of the triangle = " << area << endl;
        cout << "Perimeter of the triangle = " << perimeter << endl;
    }else{
        cout << "The input values cannot form a triangle. Bye!!\n";
    }
    return;
}

int main(){
    double d, e, f, perimeter;
    double area;
    cout << "Please provide the lengths of the edges of a triangle:" << endl;
    cin >> d >> e >> f;
    areaPerimeter(d,e,f,perimeter,area);
    return 0;
}
