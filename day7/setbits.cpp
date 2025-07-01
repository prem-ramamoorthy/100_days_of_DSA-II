#include <bits/stdc++.h>
using namespace std;


int countPrimeSetBits(int left, int right) {
        int result = 0 ; 
        for(int i = left ; i <= right ; i ++){
            int n = i ;
            string bin = "" ;
            while(n>0){
                bin = to_string(n%2) + bin ;
                n = n / 2 ;
            }
            int countdig = count(bin.begin() , bin.end() ,'1') ;
            bool valid = true ;
            if(countdig < 2){
                valid = false ;
            }
            else if(countdig == 2){
                valid = true ;
            }
            else {
                for( int j  = 2 ; j <= sqrt(countdig) ; j++){
                    if(countdig % j == 0){
                        valid = false ;
                        break ;
                    }
                }
            }
            if(valid){
                result++;
            }
        }
        return result ;
    }

int main(){

    int left = 6, right = 10;
    cout << countPrimeSetBits(left, right) << endl; 
    return 0;
}