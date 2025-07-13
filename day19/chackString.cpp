#include<bits/stdc++.h>
using namespace std ;

bool checkString(string s) {
        int bpos = -1 ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'b'){
                bpos = i ;
            }
            if(bpos != -1 && s[i] == 'a' && i > bpos){
                return false ;
            }
        }
        return true ;
    }

int main() {
    string s = "aaabbb";
    if (checkString(s)) {
        cout << "Valid string: All 'a's appear before any 'b'.\n";
    } else {
        cout << "Invalid string: An 'a' appears after a 'b'.\n";
    }
    return 0 ;
}