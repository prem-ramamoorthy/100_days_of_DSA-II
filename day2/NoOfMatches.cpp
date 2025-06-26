#include<bits/stdc++.h>
using namespace std ;

int numberOfMatches(int n) {
        int result = 0 ; 
        while(n > 1){
            if(n%2==0){
                result += n/2 ;
                n = n - n /2 ;
            }
            else{
                result += (n-1)/2 ;
                n -= (n-1)/2 ;
            }
        }
        return result ;
    }

int main() {
    int n = 7; 
    int matches = numberOfMatches(n);
    cout << "Number of matches: " << matches << endl;
    return 0;
}