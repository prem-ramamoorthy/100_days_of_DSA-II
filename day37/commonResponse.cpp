#include<bits/stdc++.h>
using namespace std ;

string findCommonResponse(vector<vector<string>>& responses) {
        map<string, int > hash ;
        for(auto &i : responses){
            set<string> uniq(i.begin() , i.end()) ;
            i = vector<string> (uniq.begin() , uniq.end() ) ;
            for(auto j : i){
                hash[j]++;
            }
        }
        if (hash.empty()) return "";
        int maxfreq = 0 ;
        for(auto i : hash){
            if(i.second > maxfreq){
                maxfreq = i.second ;
            }
        }
        bool same = true ;
        for(auto i : hash ){
            if(i.second != maxfreq){
                same = false ;
                break ;
            }
        }
        if(same){
            return hash.begin()->first;
        }
        else {
            vector<string> uniqs ;
            for(auto i : hash){
                if(i.second == maxfreq){
                    uniqs.push_back(i.first) ;
                }
            }
            return *min_element(uniqs.begin() , uniqs.end() ) ;
        }
    }

int main(){
    vector<vector<string>>responses = {{"good","ok","good","ok"},{"ok","bad","good","ok","ok"},{"good"},{"bad"}} ;
    cout<<findCommonResponse(responses) ;
    return 0;
}