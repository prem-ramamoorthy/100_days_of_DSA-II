#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        if (x + k > m || y + k > n) {
            return grid;
        }
        vector<vector<int>> cols(k , vector<int> (k, 0)) ;
        for(int i = 0 ; i < k; i++){
            for(int j = 0; j < k ; j++){
                cols[i][j] = grid[x+i][j+y] ;
            }
        }
        reverse(cols.begin() , cols.end()) ;
        for(int i = 0 ; i < k; i++){
            for(int j = 0; j < k; j++){
                grid[x+i][j+y] = cols[i][j] ;
            }
        }
        return grid ;
    }

int main () {
    vector<vector<int>> grid = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int x = 1, y = 1, k = 2;
    grid = reverseSubmatrix(grid, x, y, k);
    for (const auto& row : grid) {
        for (int val : row) {
            cout << val << " ";
        }
     
     
        cout << endl;
    }
    return 0 ;
}