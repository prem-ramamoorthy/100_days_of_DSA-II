#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
            int n = nums.size();
            int result = nums[0];
            for(int i = 0; i < n; i++) {
                int currProduct = 1;
                for(int j = i; j < n; j++) {
                    currProduct *= nums[j];
                    result = max(result, currProduct);
                }
            }
            return result;
    }

int main() {
    vector<int> nums = {2, 3, -2, 4};
    cout << "Maximum Product Subarray: " << maxProduct(nums) << endl;
    return 0;
}