#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer = matrix;
        int n = matrix[0].size() ;
        int m = matrix.size() ;
        vector<int> colmax(n,-1);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                colmax[i] = max(colmax[i], matrix[j][i]);
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ;j++){
                if(matrix[i][j] == -1){
                    answer[i][j] = colmax[j] ;
                }
            }
        }
        return answer ;
    }

int main() {
    vector<vector<int>> matrix = {
        {1, -1, 3},
        {4, 5, -1},
        {-1, 7, 8}
    };
    vector<vector<int>> result = modifiedMatrix(matrix);
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}