#include <bits/stdc++.h>
using namespace std;

int minDeletionSize(vector<string>& strs) {
        int result = 0 ;
        int m = strs.size() ;
        int n = strs[0].size() ;
        for(int j = 0 ; j < n ; j++){
            for(int i = 1 ; i < m ; i++){
                if(strs[i][j] < strs[i-1][j]){
                    result++ ;
                    break ;
                }
            }
        }
        return result ;
    }

int main() {
    vector<string> strs = {"cba", "daf", "ghi"};
    int result = minDeletionSize(strs);
    cout << "Minimum number of columns to delete: " << result << endl;
    return 0 ;
}