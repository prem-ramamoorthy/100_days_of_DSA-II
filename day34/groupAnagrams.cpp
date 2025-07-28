#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result ;
        map<map<char,int>,vector<string>> hash ;
        for(auto i : strs){
            map<char,int> res ;
            for(char j : i){
                res[j]++;
            }
            hash[res].push_back(i);
        }
        for(auto i : hash){
            result.push_back(i.second) ;
        }
        return result ;
    }

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    
    for (const auto& group : result) {
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << endl;
    }
    
    return 0;
}