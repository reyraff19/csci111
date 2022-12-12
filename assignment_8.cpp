#include <iostream>
#include <fstream>
using namespace std;

string toUpperCase(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 97 && a[i] <= 122){
            a[i] = a[i] - 32;
        }else{
            a[i] = a[i];
        }
    }
    return a;
}

string toLowerCase(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 65 && a[i] <= 90){
            a[i] = a[i] + 32;
        }else{
            a[i] = a[i];
        }
    }
    return a;
}

bool equals(string a, string b){
    if(a == b){
        return true;
    }
    return false;
}
    
int main () {
    ifstream f;
    f.open("hw8data.txt");
    string word1, word2;
    f >> word1;
    f >> word2;
    while(!f.eof()){
        cout << "Words in uppercase: " << toUpperCase(word1) << " " << toUpperCase(word2) << endl;
        cout << "Words in lowercase: " << toLowerCase(word1) << " " << toLowerCase(word2) << endl;
        if (equals(word1, word2))
            cout << "Both strings are equal." << endl;
        else
            cout << "The input strings are different." << endl;
        f >> word1;
        f >> word2;
    }
    f.close();
    return 0;
}
