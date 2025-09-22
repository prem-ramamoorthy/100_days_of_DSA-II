#include<bits/stdc++.h>
using namespace std ;

bool isStrictlyPalindromic(int n) {
        for(int i = 2 ; i <= n-2 ; i++){
            string bin = "" ;
            string rev = "" ;
            int n = i ;
            while(n > 0){
                string dig = to_string(n%2) ;
                bin = dig + bin ;
                rev += dig ;
                n /= 2 ;
            }
            if(bin != rev){
                return false ;
            }
        }
        return true ;
    }

int main() {
    int n = 4;
    cout << isStrictlyPalindromic(n) << endl; // Output: false
    return 0;
}