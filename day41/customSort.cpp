#include<bits/stdc++.h>
using namespace std;

string customSortString(string order, string s) {
        string result ;
        map<char , int> hash ;
        for(char i : s){
            hash[i]++;
        }
        for(char i : order){
            int freq = hash[i] ;
            for(int j = 0 ; j < freq ;j++){
                result += i ;
            }
            hash[i] = 0;
        }
        for(auto i : hash){
            if(i.second > 0){
                int freq1 = i.second ;
                for(int j = 0 ; j < freq1 ;j++){
                    result += i.first ;
                }
            }
        }
        return result ;
    }

int main() {
    string order = "cba";
    string s = "abcd";
    string result = customSortString(order, s);
    cout << result << endl; 
    return 0;
}