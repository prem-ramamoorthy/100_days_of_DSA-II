#include<bits/stdc++.h>
using namespace std ;

int getLeastFrequentDigit(int n) {
        if(n==0)return 0;
        unordered_map<int,int> hash ;
        while(n>0){
            hash[n%10]++ ;
            n /= 10 ;
        }
        int freq = INT_MAX ;
        for(const auto &i : hash){
            freq = min(freq , i.second) ;
        }
        int result = 10 ;
        for(const auto &i : hash){
            if(i.second == freq){
                result = min(result , i.first);
            }
        }
        return result  ;
    }

int main() {
    int n = 123123123111 ;
    cout<<getLeastFrequentDigit(n) ;
    return 0 ;
}