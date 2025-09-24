#include<bits/stdc++.h>
using namespace std ;

vector<int> countBits(int n) {
        vector<int> result = {0};
        for(int i = 1 ; i <= n ; i++){
            int bin = 0;
            int n = i ;
            while(n>0){
                if(n%2==1){
                    bin++;
                }
                n /= 2 ;
            }
            result.push_back(bin) ;
        }
        return result ;
    }

int main() {
    vector<int> result = countBits(12) ;
    for(int i : result ) {
        cout<<i <<" " ;
    }
    return 0 ;
}