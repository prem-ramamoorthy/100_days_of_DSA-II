#include<bits/stdc++.h> 
using namespace std ;

int findChampion(vector<vector<int>>& grid) {
        int result = -1 ;
        int max_1 = -1 ;
        for(int i = 0 ; i<grid.size() ; i++){
            int c = count(grid[i].begin() , grid[i].end() , 1) ;
            if(max_1 < c) {
                max_1 = c ; 
                result = i ;
            }
        }
        return result ;
    }

int main () {
    vector<vector<int>> grid = {{0,1},{0,0}} ;
    cout<<findChampion(grid) ;
}