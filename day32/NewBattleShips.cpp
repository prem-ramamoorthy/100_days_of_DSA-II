#include<bits/stdc++.h>
using namespace std ;

int countBattleships(vector<vector<char>>& board) {
        int counts = 0 ;
        int m = board.size() ;
        int n = board[0].size() ;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if (board[i][j] == 'X') {
                    if ((i == 0 || board[i-1][j] != 'X') && (j == 0 || board[i][j-1] != 'X')) {
                        ++counts;
                    }
                }
            }
        }
        return counts ;
    }

int main() {
    vector<vector<char>> board = {
        {'X', '.', '.', 'X'},
        {'.', '.', '.', 'X'},
        {'.', 'X', 'X', '.'}
    };
    cout << countBattleships(board) << endl;
    return 0;
}