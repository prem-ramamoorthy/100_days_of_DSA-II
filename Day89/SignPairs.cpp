#include<bits/stdc++.h>
using namespace std ;

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive ;
        vector<int> negative;
        for(int i : nums){
            if(i < 0){
                negative.push_back(i) ;
            }
            else{
                positive.push_back(i) ;
            }
        }  
        int it = 0 ;
        vector<int> result ;
        for(int i = 0 ; i < nums.size()/2 ; i++){
            result.push_back(positive[it]) ;
            result.push_back(negative[it]) ;
            it++ ;
        }
        return result ;
    }

int main() {
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> result = rearrangeArray(nums);
    for(int i : result){
        cout << i << " ";
    }
    return 0;
}