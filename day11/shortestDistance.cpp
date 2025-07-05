#include<bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c) {
        vector<int> result ; 
        int n = s.size() ;
        for(int i = 0 ; i < n ; i++){
            int leftind = INT_MAX ;
            int rightind = INT_MAX ;
            for(int j = i ; j >= 0 ; j--){
                if(s[j]==c){
                    leftind = i - j ;
                    break ;
                }
            }

            for(int j = i ; j < n ; j++){
                if(s[j]==c){
                    rightind = j-i ;
                    break ;
                }
            }
            result.push_back(min(rightind , leftind)) ;
        }
        return result ;
    }
int main() {
    string s = "loveleetcode";
    char c = 'e';
    vector<int> result = shortestToChar(s, c);
    for (int dist : result) {
        cout << dist << " ";
    }
    return 0;
}