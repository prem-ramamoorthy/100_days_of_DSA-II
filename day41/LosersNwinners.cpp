#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> hash ;
        for(auto i : matches) {
            hash[i[1]]++;
            if(!hash.count(i[0])) {
                hash[i[0]] = 0 ;
            }
        }
        vector<vector<int>> result(2) ;
        for(auto i : hash){
            int n = i.second ;
            if(n == 0){
                result[0].push_back(i.first) ;
            }
            else if (n == 1){
                result[1].push_back(i.first) ;
            }
        }
        return result ;
    }

int main() {
    vector<vector<int>> matches = {{1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}};
    vector<vector<int>> result = findWinners(matches);
    cout << "[";
    for (const auto& vec : result) {
        cout << "[";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << "]";
    }
    cout << "]";
    return 0;
}