#include<bits/stdc++.h>
using namespace std ;

int findKthPositive(vector<int>& arr, int k) {
        int count = 0;
        int k1 = arr.back();
        unordered_set<int> s(arr.begin(), arr.end());
        
        for (int i = 1; i <= k1; i++) {
            if (s.find(i) == s.end()) { 
                count++;
                if (count == k) {
                    return i;
                }
            }
        }
        return k1 + (k - count);
    }

int main(){
    vector<int> nums = {2,3,4,5,7,9} ;
    int k = 2 ;
    cout<<findKthPositive(nums, k);
}