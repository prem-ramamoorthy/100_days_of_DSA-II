#include<bits/stdc++.h> 
using namespace std ;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result ;
        if(m*n != original.size() ){
            return {} ;
        }
        int it = 0 ;
        while(m > 0){
            vector<int> res ;
            for(int i = 0 ; i < n ; i++){
                res.push_back(original[it]) ;
                it++;
            }
            result.push_back(res) ;
            m-- ;
        }
        return result ;
    }

int main() {
    vector<vector<int>> result = construct2DArray({1,2,3} , 1 , 3) ;
    cout<<'[' ;
    for(auto i : result ){
        cout<<'[' ;
        for(int j : i){
            cout<<j<<" ," ;
        }
        cout<<" ," ;
    }
    cout<<" ] " ;
    return 0 ; 
}