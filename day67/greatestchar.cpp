#include<bits/stdc++.h>
using namespace std;

string greatestLetter(string s) {
        sort(s.begin() , s.end() , greater()) ;
        string result = "" ;
        for(char i : s){
            if(isupper(i)){
                if(find(s.begin() , s.end() , tolower(i))!= s.end()){
                    return result + i ;
                }
            }
            else{
                if(find(s.begin() , s.end() , toupper(i))!= s.end()){
                    return result + (char)toupper(i) ;
                }
            }
        }
        return result ;
    }

int main() {
    string s = "lEeTcOdE";
    cout << greatestLetter(s) << endl;
    return 0;
}