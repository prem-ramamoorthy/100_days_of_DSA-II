#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result ;
        for(int i : nums){
            result.push_back(pow(i , 2)) ;
        }
        sort(result.begin() , result.end() ) ;
        return result;
    }

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> result = sortedSquares(nums);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}