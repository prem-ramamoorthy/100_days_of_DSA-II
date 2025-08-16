#include<bits/stdc++.h>
using namespace std ;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> B(nums.begin() , nums.end() ) ;
        set<int> A ;
        for(int i = 1 ; i <= nums.size() ; i++){
            A.insert(i) ;
        }
        vector<int> diff;
        set_difference(
            A.begin(), A.end(),
            B.begin(), B.end(),
            back_inserter(diff)
        );
        return diff ;
    }

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for (int i : result) {
        cout << i << " ";
    }
    return 0 ;
}