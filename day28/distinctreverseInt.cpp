#include <bits/stdc++.h>
using namespace std ;

int countDistinctIntegers(vector<int>& nums) {
        set<int> uniqs(nums.begin() , nums.end() ) ;
        for(int i : nums){
            int n = i ;
            int res = 0 ;
            while(n > 0 ){
                res = res * 10 + (n % 10 ) ;
                n /= 10 ;
            }
            uniqs.insert(res) ;
        }
        return uniqs.size() ;
    }

int main(){
    vector<int> nums = {1,13,10,12,31 } ;
    cout<<countDistinctIntegers(nums) ;
    return 0 ;
}