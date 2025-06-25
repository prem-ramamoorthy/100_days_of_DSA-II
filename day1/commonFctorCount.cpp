#include <bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b) {
        int result = 0 ;
        int m = 0 ;
        if(a > b){
            m = a ;
        }
        else{
            m = b ;
        }
        for(int i = 1 ; i <= m ; i ++ ){
            if(a % i == 0  && b % i ==0 ){
                result++ ;
            }
        }
        return result ;
    }

int main(){
    int a = 12, b = 6;
    int factors = commonFactors(a, b);
    cout << "Number of common factors between " << a << " and " << b << " is: " << factors << endl;
    return 0;
}