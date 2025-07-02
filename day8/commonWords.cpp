#include <bits/stdc++.h>
using namespace std ;

vector<string> commonChars(vector<string>& words) {
        vector<string> result ;
        int n = words.size() ;
        unordered_map<char,int> hash ;
        for(char i : words[0] ){
            hash[i]++;
        }
        for(int i = 1 ; i < n ; i++){
            unordered_map<char , int > min_hash ;
            string word = words[i] ;
            for(char j : word ){
                min_hash[j]++;
            }
            for(auto k : hash){
                if(min_hash.find(k.first) != min_hash.end() ){
                    hash[k.first] = min(min_hash[k.first] , hash[k.first]) ;
                }
                else{
                    hash[k.first] = 0 ;
                }
            }
        }
        for(auto i : hash){
            int freq = i.second ;
            for(int j = 0 ; j< freq ; j++){
                string s1 = "" ;
                s1 += i.first ;
                result.push_back( s1 ) ; 
            }
        }
        return result ;
    }

int main(){
    vector<string> words = { "bella","label","roller" } ;
    vector<string> result = commonChars(words) ;
    cout<<"[" ;
    for(string i : result){
        cout<<i;
    }
    cout<<"]" ;

    return 0 ;
}