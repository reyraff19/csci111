#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream f;
    f.open("hw8data.txt");
    f << "Zebra[]z" << " " << "Zebra[]z" << endl;
    f << "hello^{}~!" << " " << "Hello^{}~!" << endl;
    f << "SPRING2022" << " " << "spring2022" << endl;
    f << "1234567" << " " << "1234567" << endl;
    f << "summer vacation^_^" << endl;
    f.close();
    return 0;
}
