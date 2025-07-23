#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int> > hash ;
        for(int i = 0 ; i < groupSizes.size() ; i++){
            hash[groupSizes[i]].push_back(i) ; 
        }
        vector<vector<int>> result ;
        for(auto i : hash){
            if(i.second.size() > i.first){
                vector<int> res ;
                for(int j = 0 ; j < i.second.size()  ; j++){
                    if(res.size() == i.first){
                        result.push_back(res) ;
                        res = {} ;
                    }
                    res.push_back(i.second[j]) ;
                }
                result.push_back(res) ;
            }
            else{
                result.push_back(i.second) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> groupSizes = {3, 3, 3, 3,
                                3, 1, 3, 3};
    vector<vector<int>> result = groupThePeople(groupSizes);
    for (const auto& group : result) {
        for (int person : group) {
            cout << person << " ";
        }
        cout << endl;
    }
    return 0;
}