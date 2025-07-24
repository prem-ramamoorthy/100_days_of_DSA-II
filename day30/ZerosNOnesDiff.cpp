#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int ncols = grid[0].size() ;
        int nrows = grid.size() ;
        vector<int> rzeros(nrows , 0) , rones(nrows , 0) ;
        vector<int> czeros(ncols , 0) , cones(ncols , 0) ;
        vector<vector<int>> result(nrows , vector<int> (ncols , 0)) ;
        for(int i = 0 ; i < nrows ; i++){
            for(int j = 0 ; j < ncols ; j++){
                if(grid[i][j] == 1 ){
                    rones[i]++ ;
                    cones[j]++ ;
                }
                else{
                    rzeros[i]++;
                    czeros[j]++;
                }
            }
        }
        for(int i = 0 ; i < nrows ; i++){
            for(int j = 0 ; j < ncols ; j++){
                result[i][j] = rones[i] + cones[j] - rzeros[i] - czeros[j] ;
            }
        }
        return result ;
    }

int main () {
    vector<vector<int>> grid = {{0,1,1},{1,0,1},{0,0,1}};
    vector<vector<int>> result = onesMinusZeros(grid);
    for (const auto& row : result) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0 ;
}