#include <bits/stdc++.h>
using namespace std ;

int countPartitions(vector<int>& nums) {
        int result = 0 ; 
        int n = nums.size() ;
        for(int i = 1 ; i < n ; i++){
            int lsum = 0 ;
            for(int j = 0 ; j <= i ; j++){
                lsum += nums[j] ;
            }
            int rsum = 0 ;
            for(int j = i+1 ; j < n ; j++){
                rsum += nums[j] ;
            }
            if(abs(lsum - rsum) % 2 == 0){
                result++ ;
            }
        }
        return result; 
    }

int main () {
    vector<int> nums = {10,10,3,7,6} ;
    cout<< countPartitions(nums) ;
    return 0 ;
}