#include<bits/stdc++.h>
using namespace std;

vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size() ;
        vector<long long> result(n) ;
        long long sum = 0 ; 
        long long curmax = -1 ;
        for(int i = 0 ; i < n ; i++){
            if(curmax < nums[i]) {
                curmax = nums[i] ;
            }
            result[i] = nums[i] + curmax ;
            sum += result[i] ;
            result[i] = sum ;
            
        }
        return result ;
    }

int main() {
    vector<int> nums = {2, 3, 7, 5, 10} ;
    vector<long long> result = findPrefixScore(nums) ;
    cout<<"[" ;
    for (auto i : result){
        cout<<i<<" ," ;
    }
    cout<<"]"<<endl ;
    return 0 ;
}