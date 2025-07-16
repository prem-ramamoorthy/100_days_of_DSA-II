#include <bits/stdc++.h>
using namespace std ;

int unequalTriplets(vector<int>& nums) {
        int result = 0 ; 
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++ ){
                if(nums[i] != nums[j] ){
                    for(int k = j ; k < n ; k ++){
                            if(nums[i] != nums[j] && nums[j]!= nums[k] && nums[k]!= nums[i]){
                                result++ ;
                        }
                    }
                }
            }
        }
        return result ;
    }

int main(){
    vector<int> nums = {4,4,2,4,3} ;
    cout<<unequalTriplets(nums) ;
    return 0 ;
}