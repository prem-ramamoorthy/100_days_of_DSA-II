#include<bits/stdc++.h>
using namespace std ;

bool digitCount(string num) {
        unordered_map<char,int> hash ;
        for(char i : num ){
            hash[i]++ ;
        }
        for(int i = 0  ; i < num.size() ; i++){
            int nv = num[i] - '0' ;
            char digit = i + '0';
            if(nv != hash[digit]){
                return false ;
            }
        }
        return true ;
    }

int main () {
    cout<<digitCount("030") ;
    return 0 ;
}