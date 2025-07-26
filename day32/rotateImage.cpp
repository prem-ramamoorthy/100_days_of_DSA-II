#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> result ;
        int n = matrix.size()  ;
        for(int i = 0 ; i < n ; i++){
            vector<int> res ;
            for(int j = 0 ; j < n ; j++){
                res.insert(res.begin() , matrix[j][i]) ;
            }
            result.push_back(res) ;
        }
        matrix = result ;
    }

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotate(matrix);
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}