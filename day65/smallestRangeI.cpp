#include<bits/stdc++.h>
using namespace std;

int smallestRangeI(vector<int>& nums, int k) {
        int result = 0 ;
        int n = nums.size() ;
        int maxi = INT_MIN ;
        int mini = INT_MAX ;
        for(int j = 0 ; j < n ; j++){
            maxi = max(maxi , nums[j]) ;
            mini = min(mini , nums[j]) ;
        }
        result = max(result , (maxi - mini - 2*k)) ;
        return result ;
    }

int main() {
    vector<int> nums = {1, 3, 6};
    int k = 3;
    cout << smallestRangeI(nums, k) << endl;
    return 0;
}