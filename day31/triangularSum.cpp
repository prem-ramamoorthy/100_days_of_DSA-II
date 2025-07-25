#include <bits/stdc++.h>
using namespace std;

int triangularSum(vector<int>& nums) {
        while(nums.size() > 1){
            vector<int> res ;
            for(int i = 1 ; i < nums.size() ; i++){
                int n = nums[i] + nums[i-1] ;
                if(n >=10){
                    n = n - 10 ; 
                }
                res.push_back(n) ;
            }
            nums=res;
        }
        return nums[0] ;
    }

int main() {
    vector<int> nums = {2, 5, 3, 4, 1};
    int result = triangularSum(nums);
    cout << "The triangular sum is: " << result << endl;
    return 0;
}