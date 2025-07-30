#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
        unordered_map<char,int> h ;
        for(char i : s){
            h[i]++;
        }
        vector<pair<char,int>> hash(h.begin() , h.end() ) ;
        sort(hash.begin(), hash.end(), [](const pair<char,int>& a, const pair<char,int>& b) {
            return a.second > b.second;
        });
        string result = "" ;
        for (auto it : hash ) {
            result.append(it.second , it.first ) ;
        }
        return result ;
    }

int main() {
    string s = "tree";
    cout << "Input: " << s << endl;
    string sorted = frequencySort(s);
    cout << "Sorted by frequency: " << sorted << endl;
    return 0;
}