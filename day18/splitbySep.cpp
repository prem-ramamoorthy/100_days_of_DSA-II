#include<bits/stdc++.h>
using namespace std ;

vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result ;
        for(string i : words){
            string res = "" ;
            for(char j : i){
                if(j == separator){
                    if(res != ""){
                        result.push_back(res) ;
                    }
                    res = "" ;
                    continue ;
                }
                res+=j ;
            }
            if(res != ""){
                result.push_back(res) ;
            }
        }
        return result ;
    }

int main(){
    vector<string> words = {"$easy$","$problem$"} ;
    char separator = "$" ;
    vector<string> result = splitWordsBySeparator(words , separator) ;
    cout<<"[" ;
    for(string i : result ){
        cout<<i <<" ," ;
    }
    cout<<"]" ;
    return 0 ;
}