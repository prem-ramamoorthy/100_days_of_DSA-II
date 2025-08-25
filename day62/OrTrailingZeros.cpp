#include<bits/stdc++.h>
using namespace std;

bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++ ){
                int num = nums[i] | nums[j] ;
                if(num % 2 == 0){
                    return true ;
                }
            }
        }
        return false ;
    }

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << hasTrailingZeros(nums) << endl;
    return 0 ;
}