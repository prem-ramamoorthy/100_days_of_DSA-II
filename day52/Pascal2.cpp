#include<bits/stdc++.h>
using namespace std ;

vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal ;
        for(int i = 0 ; i <= rowIndex ; i++){
            vector<int> res(i+1 , 1);
            for(int j = 1 ; j < i ; j++){
                res[j] = pascal[i-1][j-1] + pascal[i-1][j] ;
            }
            pascal.push_back(res) ;
        }
        return pascal[rowIndex] ;
    }

int main() {
    int rowIndex = 2 ;
    vector<int> result = getRow(rowIndex);
    for(int i : result) {
        cout << i << " ";
    }
    return 0 ;
}