#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> result(8);
        for(vector<int>& queen : queens) {
            if(king[0] == queen[0]) {
                if(queen[1] < king[1]) {
                    if(result[0].empty() || queen[1] > result[0][1]) {
                        result[0] = queen;
                    }
                }
                else if(queen[1] > king[1]) {
                    if(result[4].empty() || queen[1] < result[4][1]) {
                        result[4] = queen;
                    }
                }
            }
            if(king[1] == queen[1]) {
                if(queen[0] < king[0]) {
                    if(result[2].empty() || queen[0] > result[2][0]) {
                        result[2] = queen;
                    }
                }
                else if(queen[0] > king[0]) {
                    if(result[6].empty() || queen[0] < result[6][0]) {
                        result[6] = queen;
                    }
                }
            }
            if(abs(king[0] - queen[0]) == abs(king[1] - queen[1])) {
                if(queen[0] < king[0] && queen[1] < king[1]) {
                    if(result[1].empty() || queen[0] > result[1][0]) {
                        result[1] = queen;
                    }
                }
                else if(queen[0] < king[0] && queen[1] > king[1]) {
                    if(result[3].empty() || queen[0] > result[3][0]) {
                        result[3] = queen;
                    }
                }
                else if(queen[0] > king[0] && queen[1] < king[1]) {
                    if(result[5].empty() || queen[0] < result[5][0]) {
                        result[5] = queen;
                    }
                }
                else if(queen[0] > king[0] && queen[1] > king[1]) {
                    if(result[7].empty() || queen[0] < result[7][0]) {
                        result[7] = queen;
                    }
                }
            }
        }
        vector<vector<int>> attackingQueens;
        for(auto& queen : result) {
            if(!queen.empty()) {
                attackingQueens.push_back(queen);
            }
        }
        return attackingQueens;
    }

int main() {
    vector<vector<int>> queens = {{0, 1}, {1, 0}, {4, 0}, {0, 4}, {3, 3}, {2, 4}};
    vector<int> king = {0, 0};
    vector<vector<int>> result = queensAttacktheKing(queens, king);
    cout << "[";
    for (const auto& queen : result) {
        cout << "[" << queen[0] << ", " << queen[1] << "], ";
    }
    cout << "]" << endl;
    return 0;
}