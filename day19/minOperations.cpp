#include <bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) {
    int n = nums.size();
    int result = 0;
    while (1) {
        int mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0 && mini > nums[i]) {
                mini = nums[i];
            }
        }
        if (mini == INT_MAX) break;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                nums[i] -= mini;
            }
        }
        result++;
    }
    return result;
}

int main() {
    vector<int> nums = {1, 5, 0, 3, 5};
    cout << "Minimum operations: " << minimumOperations(nums) << endl;
    return 0;
}