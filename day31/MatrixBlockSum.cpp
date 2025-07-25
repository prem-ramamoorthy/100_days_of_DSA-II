#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                prefix[i + 1][j + 1] = mat[i][j]
                                    + prefix[i][j + 1]
                                    + prefix[i + 1][j]
                                    - prefix[i][j];
            }
        }
        vector<vector<int>> result(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int r1 = max(0, i - k), c1 = max(0, j - k);
                int r2 = min(m - 1, i + k), c2 = min(n - 1, j + k);
                result[i][j] = prefix[r2 + 1][c2 + 1]
                            - prefix[r1][c2 + 1]
                            - prefix[r2 + 1][c1]
                            + prefix[r1][c1];
            }
        }
        return result;
    }

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int k = 1;
    vector<vector<int>> res = matrixBlockSum(mat, k);
    for (const auto& row : res) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}