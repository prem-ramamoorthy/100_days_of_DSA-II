#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        int m = matrix[0].size() ;
        vector<int> cols , rows ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j ++){
                if(matrix[i][j] == 0){
                    cols.push_back(j) ;
                    rows.push_back(i) ;
                }
            }
        }
        for(int i = 0 ; i < rows.size() ; i++){
            for(int j = 0 ; j < m ; j++){
                matrix[rows[i]][j] = 0 ;
            }
        }
        for(int i = 0 ; i < cols.size() ; i++){
            for(int j = 0 ; j < n ; j++){
                matrix[j][cols[i]] = 0;
            }
        }
    }

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    setZeroes(matrix);
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    return 0;
}