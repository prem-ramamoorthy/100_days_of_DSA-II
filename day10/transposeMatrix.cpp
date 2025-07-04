#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size() ;
        int col = matrix[0].size() ;
        vector<vector<int>> result;
        for(int i = 0 ; i< col ; i++){
            vector<int> nrow ;
            for(int j = 0 ; j < row ; j++){
                nrow.push_back(matrix[j][i]) ;
            }
            result.push_back(nrow) ;
        }
        return result ;
    }

int main () {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}} ;
    vector<vector<int>> result = transpose(matrix) ;
    for(auto row : result){
        for(auto val : row){
            cout << val << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}