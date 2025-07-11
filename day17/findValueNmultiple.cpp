#include<bits/stdc++.h>
using namespace std ;

int findFinalValue(vector<int>& nums, int original) {
        int result = original ;
        while(find(nums.begin() , nums.end() , result) != nums.end()){
            result *= 2 ;
        }
        return result ;
    }

int main(){
    vector<int> nums = {5,3,6,1,12} ;
    int n = 3 ;
    cout<<findFinalValue(nums,n) ;
    return 0 ;
}