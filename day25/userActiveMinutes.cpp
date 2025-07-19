#include <bits/stdc++.h>
using namespace std ;

vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> result(k , 0) ;
        map<int , set<int> > hash ;
        for(int i = 0 ; i < logs.size() ; i++){
            hash[logs[i][0]].insert(logs[i][1]) ;
        }
        for(auto i : hash){
            result[i.second.size()-1]++ ;
        }
        return result ;
    }

int main () {
    vector<vector<int>> logs = {{0,5},{1,2},{0,2},{0,5},{1,3}} ;
    vector<int> result = findingUsersActiveMinutes(logs , 5) ;
    cout<<"[" ;
    for(int i : result){
        cout<<i<<" ," ;
    }
    cout<<"]" ;
    return 0 ; 
}