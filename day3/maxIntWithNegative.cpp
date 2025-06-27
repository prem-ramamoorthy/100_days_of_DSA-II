#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maxK = -1;
        
        for (int num : nums) {
            if (num > 0 && s.count(-num)) {
                maxK = max(maxK, num);
            }
        }
        return maxK;
    }

int main() {
    vector<int> nums = {1, 2, -1, -2, 3, -3};
    int result = findMaxK(nums);
    cout << "The maximum K such that K and -K both exist is: " << result << endl;
    return 0;
}