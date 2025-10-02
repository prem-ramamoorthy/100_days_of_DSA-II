#include<bits/stdc++.h>
using namespace std ;

int removePalindromeSub(string s) {
        if(s.size()==0)return 0 ;
        string s1 = s ;
        reverse(s1.begin() , s1.end() ) ;
        if(s == s1) return 1 ;
        else return 2 ;
    }

int main() {
    cout<<removePalindromeSub("assa") ;
    return 0 ;
}