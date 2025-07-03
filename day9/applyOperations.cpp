#include<bits/stdc++.h>
using namespace std;

vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> result ; 
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i] * 2 ;
                nums[i+1]  = 0  ;
            }
        }
        int nzero = 0 ;
        for(int i : nums ) {
            if(i == 0){
                nzero++;
            }
            else{
                result.push_back(i) ;
            }
        }
        for(int i = 0 ; i < nzero ; i++){
            result.push_back(0) ;
        }
        return result ;
    }

int main() {
    vector<int> nums = {1,2,2,1,1,0} ;
    vector<int> result = applyOperations(nums) ;
    for(int i : result){
        cout << i << " " ;
    }
    cout << endl ;
    return 0 ;
}