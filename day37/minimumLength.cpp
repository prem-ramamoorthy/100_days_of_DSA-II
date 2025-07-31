#include<bits/stdc++.h>
using namespace std ;

int minimumLength(string s) {
        unordered_map<char, vector<int>> positions;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            positions[s[i]].push_back(i);
        }

        int pairs_removed = 0;
        for (auto &p : positions) {
            auto &pos = p.second;
            int left = 0, right = (int)pos.size() - 1;
            while (right - left + 1 >= 3) {
                pairs_removed++;
                left++;
                right--;
            }
        }
        return n - 2 * pairs_removed;
    }

int main () {
    cout << minimumLegth("abaacbcbb") ;
    return 0 ; 
}