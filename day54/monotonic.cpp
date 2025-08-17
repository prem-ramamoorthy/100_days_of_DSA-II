#include<bits/stdc++.h>
using namespace std ;

bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return true;
        int i = 1;
        while (i < n && nums[i] == nums[i - 1])
            i++;
        if (i == n)
            return true;

        bool inc = nums[i] >
                   nums[i - 1]; 

        for (; i < n; i++) {
            if (inc) {
                if (nums[i] < nums[i - 1])
                    return false;
            } else {
                if (nums[i] > nums[i - 1])
                    return false;
            }
        }
        return true;
    }

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    cout << isMonotonic(nums1) << endl;
    cout << isMonotonic(nums2) << endl;
    return 0;
}