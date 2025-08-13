#include<bits/stdc++.h>
using namespace std ;

int islandPerimeter(vector<vector<int>>& grid) {
        int result = 0 ;
        int n = grid[0].size() ;
        int m = grid.size() ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    result += 4 ;
                    if(i > 0 && grid[i-1][j] == 1){
                        result -=1 ;
                    }
                    if(i < m-1 && grid[i+1][j] == 1){
                        result -=1 ;
                    }
                    if(j > 0 && grid[i][j-1] == 1){
                        result -=1 ;
                    }
                    if(j < n-1 && grid[i][j+1] == 1){
                        result -=1 ;
                    }
                }
            }
        }
        return result ;
    }

int main() {
    vector<vector<int>> grid = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {0, 0, 0, 0}
    };
    cout << islandPerimeter(grid) << endl;
    return 0 ;
}