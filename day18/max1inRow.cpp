#include<bits/stdc++.h>
using namespace std ;

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        map<int , int > hash ;
        for(int i = 0 ; i < mat.size() ; i++){
            hash[i] = count(mat[i].begin() , mat[i].end() , 1) ;
        }
        int i1 = -1 ;
        int i2 = -1 ;
        for(auto i : hash){
            if(i2<i.second){
                i1 = i.first ;
                i2 = i.second ;
            }
        }
        return {i1 , i2} ;
    }

int main(){
    vector<vector<int>> mat = {{0,1},{1,0}} ;
    vector<int> result = rowAndMaximumOnes(mat) ;
    cout<<"["<<result[0]<<" ,"<<result[1]<<" ]" ;
    return 0 ;
}