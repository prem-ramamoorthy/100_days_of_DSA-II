#include<bits/stdc++.h>
using namespace std ;

int thirdMax(vector<int>& nums) {
    set<int> hash(nums.begin(), nums.end());
    if (hash.size() < 3) {
        return *hash.rbegin();  
    } else {
        auto it = hash.rbegin();
        advance(it, 2);           
        return *it;
    }
}

int main(){

    vector<int> nums = {3, 2, 1};
    int result = thirdMax(nums);
    cout<<result ;
    return 0 ;
}