#include<bits/stdc++.h>
using namespace std ;

char repeatedCharacter(string s) {
        unordered_map<char,int> hash;
        for(int i = 0 ; i < s.size() ; i++){
            hash[s[i]]++;
            if(hash[s[i]] >= 2){
                return s[i] ;
            }
        }
        return s[1] ;
    }

int main() {
    string s = "abccbaacz" ;
    cout<<repeatedCharacter(s) ;
    return 0 ;
}