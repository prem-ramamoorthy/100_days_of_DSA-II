#include<bits/stdc++.h>
using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string s1 = "" ;
        for(char i : firstWord){
            int c = 'a' - 'i' ;
            s1 += to_string(c) ;
        }
        string s2 = "" ;
        for(char i : secondWord){
            int c = 'a' - 'i' ;
            s2 += to_string(c) ;
        }
        string s3 = "" ;
        for(char i : targetWord){
            int c = 'a' - 'i' ;
            s3 += to_string(c) ;
        }
        int i1 = stoi(s1) ;
        int i2 = stoi(s2) ;
        int i3 = stoi(s3) ;
        return (i1+i2) == i3 ;
    }

int main() {
    string firstWord, secondWord, targetWord;
    cin >> firstWord >> secondWord >> targetWord;
    if (isSumEqual(firstWord, secondWord, targetWord)) {
        cout << "Words are equal" << endl;
    } else {
        cout << "Words are not equal" << endl;
    }
    return 0;
}