#include<bits/stdc++.h>
using namespace std ;

int minimumOperations(vector<vector<int>>& grid) {
        int result = 0 ; 
        int m = grid.size() , n = grid[0].size() ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(!((grid[j][i] - grid[j-1][i]) > 0)) {
                    int incs = grid[j-1][i] +1 - grid[j][i] ;
                    result += incs;
                    grid[j][i] += incs ;
                }
            }
        }
        return result ;
    }

int main(){
    vector<vector<int>> grid = {
        {3,2},{1,3},{3,4},{0,1}
    } ;
    cout<<minimumOperations(grid) ;
    return 0 ;
}