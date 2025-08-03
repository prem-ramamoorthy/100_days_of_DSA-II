#include<bits/stdc++.h>
using namespace std;

vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> indexes ;
        for(int i = 0 ; i< nums.size() ; i++){
            if(nums[i] == x){
                indexes.push_back(i) ;
            }
        }
        vector<int> result ;
        int n = indexes.size() ;
        for(int i : queries){
            if(i <= n){
                result.push_back(indexes[i-1]) ;
            }
            else{
                result.push_back(-1) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> nums = {1, 2, 3, 2, 4, 2, 5};
    vector<int> queries = {1, 2, 3, 4,5, 6, 7};
    int x = 2;
    vector<int> result = occurrencesOfElement(nums, queries, x);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}