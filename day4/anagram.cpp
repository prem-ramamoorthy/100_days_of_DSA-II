#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
        map<char,int> hash1 ;
        map<char,int> hash2 ;
        for(int i = 0 ; i < s.size() ; i++){
            hash1[s[i]]++;
        }
        for(int i = 0 ; i < t.size() ; i++){
            hash2[t[i]]++;
        }
        for(auto i : hash2){
            if(hash1[i.first] != i.second){
                return false ;
            }
        }
        for(auto i : hash1){
            if(hash2[i.first] != i.second){
                return false ;
            }
        }
        return true ;
    }

int main() {
    string s, t;
    s = "anagram";
    t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}