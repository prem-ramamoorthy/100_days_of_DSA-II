#include<bits/stdc++.h>
using namespace std ;

void sortColors(vector<int>& nums) {
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n -1 ; j++){
                if(nums[i] < nums[j]){
                    swap(nums[i] , nums[j] ) ;
                }
            }
        }
    }

int main() {
    vector<int> nums= {0,0,2,1,2,1} ;
    sortColors(nums) ;
    for(int i : nums){
        cout<<i<<" " ;
    }
    return 0 ;
}