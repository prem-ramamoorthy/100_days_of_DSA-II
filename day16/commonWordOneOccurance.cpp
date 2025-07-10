#include <bits/stdc++.h>
using namespace std ;

int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0 ; 
        map<string,int> hash1 ;
        map<string,int> hash2 ;
        set<string> uniques ;
        for(string i : words1){
            hash1[i]++;
            uniques.insert(i) ;
        }
        for(string i : words2){
            hash2[i]++;
            uniques.insert(i) ;
        }
        for(string i : uniques){
            if(hash1[i]==1 && hash2[i]==1){
                count++;
            }
        }
        return count ;
    }

int main(){
    vector<string> words = {"leetcode","is","amazing","as","is"} ;
    vector<string> words2 = {"amazing","leetcode","is"} ;
    cout<<countWords(words,words2) ;
}