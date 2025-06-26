#include <bits/stdc++.h>
using namespace std;

vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> result ;
        vector<int> indices ; 
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i ++){
            if(nums[i] == key){
                indices.push_back(i) ;
            }
        }
        int in = indices.size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < in ; j++){
                if(abs(i - indices[j] ) <= k){
                    result.push_back(i) ;
                    break ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    int key = 9;
    int k = 1;
    vector<int> result = findKDistantIndices(nums, key, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}