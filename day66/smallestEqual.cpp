#include<bits/stdc++.h>
using namespace std ;

int smallestEqual(vector<int>& nums) {
    int resutl = 0 ;
        for(int i = 0 ; i < nums.size() ;i++){
            if(i%10 == nums[i]){
                return i ;
            }
        }
        return -1 ;
    }

int main(){
    vector<int> nums = {0,1,2} ;
    cout<<smallestEqual(nums);
    return 0 ;
}