#include <bits/stdc++.h>
using namespace std;

int numOfPairs(vector<string>& nums, string target) {
        int result = 0 ; 
        int n = nums.size() ;
        for(int i = 0 ; i < n;i++ ){
            for(int j = 0 ; j < n ; j++){
                if(i != j){
                    if(nums[i]+nums[j] == target){
                        result++;
                    }
                }
            }
        }
        return result ;
    }

int main() {
    vector<string> nums = {"1", "2", "3", "4", "
5"};
    string target = "12";
    int count = numOfPairs(nums, target);
    cout << "Number of pairs: " << count << endl;
    return 0;
}