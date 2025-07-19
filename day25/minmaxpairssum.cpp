#include<bits/stdc++.h>
using namespace std ;

int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end() ) ;
        int front = 0 ; 
        int back = nums.size()-1 ;
        int result = -1 ;
        for(int i = 0 ; i < nums.size() /2 ; i++){
            result = max(nums[front]+nums[back] , result ) ;
            front++ ;
            back-- ;
        }
        return result ;
    }

int main() {
    vector<int> nums = {3,5,2,3} ;
    cout<<minPairSum(nums) ;
    return 0 ;
}