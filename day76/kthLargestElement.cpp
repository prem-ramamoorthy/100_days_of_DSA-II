#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end() , greater<int>()) ;
        return nums[k-1] ;
    }

int main() {
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout << findKthLargest(nums, k) << endl; // Output: 5
    return 0;
}