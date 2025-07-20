#include<bits/stdc++.h>
using namespace std ;

string stringHash(string s, int k) {
        string result = "" ;
        int n = s.size() ;
        for(int i = 0 ; i < n ; i+=k){
            int number = 0 ;
            for(int j = i ; j < i+k && j < n ; j++){
                number += s[j] - 'a' ;
            }
            number = number % 26 ;
            result += 'a' + number ;
        }
        return result ;
    }

int main () {
    string s = "abcde" ;
    int k = 2 ;
    string result = stringHash(s, k) ;
    cout<<result<<endl ; 
    return 0 ; 
}