#include <iostream>
using namespace std ;

int climbStairs(int n) {
        if(n == 1) return 1 ;
        int n1 = 1 ;
        int n2 = 2 ;
        if(n > 2){
            for(int i = 2 ; i < n ; i++){
                int n3 = n1 + n2 ;
                n1 = n2 ;
                n2 = n3 ;
            }
        }
        return n2 ;
    }

int main() {
    cout<<climbStairs(4) ;
    return 0 ;
}