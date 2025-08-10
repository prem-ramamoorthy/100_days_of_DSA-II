#include<bits/stdc++.h>
using namespace std ;

int hammingWeight(int n) {
        int result = 0 ; 
        while(n > 0){
            int dig = n % 2 ;
            if(dig == 1){
                result++;
            }
            n = n / 2 ;
        }
        return result ;
    }

int main () {
    int n = 12 ;
    cout<< hammingWeight(n) ;
    return 0 ;
}