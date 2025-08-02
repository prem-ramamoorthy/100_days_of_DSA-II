#include<bits/stdc++.h>
using namespace std;

int countServers(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        int result = 0  ;
        vector<int> rows(m, 0) ;
        vector<int> cols(n, 0) ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] && (rows[i] > 1 || cols[j]>1)){
                    result++;
                }
            }
        }
        return result ;
    }

int main () {
    vector<vector<int>> grid = {{1,0},{0,1}};
    cout << countServers(grid) << endl;
    return 0 ;
}