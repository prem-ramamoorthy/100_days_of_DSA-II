#include<bits/stdc++.h>
using namespace std;

int minSteps(string s, string t) {
        unordered_map<char , int> hash ;
        for(char i : s){
            hash[i]++;
        }
        for(char i : t){
            hash[i]--;
        }
        int result = 0 ;
        for(auto i : hash){
            result += abs(i.second) ;
        }
        return result ;
    }

int main() {

    string s = "anagram" ;
    string t = "manga" ;
    int result = minSteps(s, t);
    cout << result << endl; 
    return 0 ; 
}