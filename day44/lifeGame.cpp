#include<bits/stdc++.h>
using namespace std;

void gameOfLife(vector<vector<int>>& board) {
        int m = board.size() ;
        int n = board[0].size() ;
        vector<vector<int>> old_board = board;
        for(int i = 0 ; i < m ; i++){
            int count1 = 0 ;
            for(int j = 0 ; j < n ; j++){
                if(i > 0 && old_board[i-1][j] == 1){
                    count1++;
                }
                if(j < n-1 && old_board[i][j+1] == 1){
                    count1++;
                }
                if(i < m-1 && old_board[i+1][j] == 1){
                    count1++;
                }
                if(j > 0 && old_board[i][j-1] == 1){
                    count1++;
                }
                if(i < m-1 && j < n-1 && old_board[i+1][j+1] == 1){
                    count1++;
                }
                if(i > 0 && j > 0 && old_board[i-1][j-1] == 1){
                    count1++;
                }
                if(i < m-1 && j > 0 && old_board[i+1][j-1] == 1){
                    count1++;
                }
                if(i >0 && j < n-1 && old_board[i-1][j+1] == 1){
                    count1++;
                }
                if(old_board[i][j] == 1 && count1 < 2){
                    board[i][j] = 0 ;
                }
                if(old_board[i][j] == 1 && count1 > 3){
                    board[i][j] = 0 ;
                }
                if(old_board[i][j] == 0 && count1 == 3){
                    board[i][j] = 1 ;
                }
                count1 = 0 ;
            }
        }
    }

int main() {
    vector<vector<int>> board = {
        {0, 1, 0},
        {0, 0, 1},
        {1, 1, 1},
        {0, 0, 0}
    };
    gameOfLife(board);
    cout << "Next State of the Game of Life Board:" << endl;
    for (const auto& row : board) {
        for (int cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    return 0 ;
}