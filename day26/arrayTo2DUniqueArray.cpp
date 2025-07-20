#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> result ;
        while(nums.size() > 0){
            set<int> uniq(nums.begin() , nums.end() ) ;
            vector<int> res ;
            for(int j : uniq){
                res.push_back(j) ;
                auto it = find(nums.begin(), nums.end(), j);
                if (it != nums.end()) {
                    nums.erase(it);
                }
            }
            result.push_back(res) ;
        }

        return result ;
    }

int main () {
    vector<int> nums = {1, 2, 3, 4,
                          1, 2, 3, 4, 5} ;
    vector<vector<int>> result = findMatrix(nums) ;
    cout<<"[" ; 
    for(auto i : result){
        cout<<"[" ;
        for(int j : i){
            cout<<j<<" " ;
        }
        cout<<"]" ;
    }
    cout<<"]" ;
    return 0 ;
}
