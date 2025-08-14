#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> res ;
        int n = mat[0].size() ;
        int m = mat.size() ;
        if (m * n != r * c) {
            return mat; 
        }

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                res.push_back(mat[i][j]) ;
            }
        }
        vector<vector<int>> result(r , vector<int> (c));
        int it = 0 ;
        for(int i = 0 ;i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                result[i][j] = res[it] ;
                it++;
            }
        }
        return result ;
    }

int main() {
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    int r = 1, c = 4;
    vector<vector<int>> reshaped = matrixReshape(mat, r, c);
    for (const auto& row : reshaped) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}