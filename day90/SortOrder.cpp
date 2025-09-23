#include<bits/stdc++.h>
using namespace std ;

vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> hash ;
        for(int i = 0 ; i < order.size() ; i++){
            hash[order[i]] = i ;
        }
        map<int,int> hash2 ;
        for(int i : friends){
            hash2[hash[i]] = i ;
        }
        vector<int> res ;
        for(auto i : hash2){
            res.push_back(i.second) ;
        }
        return res ;
    }

int main() {
    vector<int> order = {3,1,2,5,4} ;
    vector<int> friends = {1,3,4} ;
    vector<int> result = recoverOrder(order  , friends) ;
    for(int i : result ){
        cout<<i<<" " ;
    }
    return 0 ;
}