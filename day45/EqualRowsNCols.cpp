#include<bits/stdc++.h>
using namespace std;

int equalPairs(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        int result = 0 ;
        vector<vector<int>> rows ;
        for(int i = 0 ; i < m ; i++ ){
            rows.push_back(grid[i]);
        }
        vector<vector<int>> cols ;
        for(int i = 0 ; i < m ; i++ ){
            vector<int> res ;
            for(int j = 0 ; j < n ; j++){
                res.push_back(grid[j][i]) ;
            }
            cols.push_back(res) ;
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(rows[i] == cols[j]){
                    result++;
                }
            }
        }
        return result ;
    }

int main() {
    vector<vector<int>> grid = {
        {1, 2, 3},
        {2, 3, 1},
        {3, 1, 2}
    };
    cout << equalPairs(grid) << endl;
    return 0;
}