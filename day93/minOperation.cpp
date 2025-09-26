#include<bits/stdc++.h>
using namespace std ;

vector<int> minOperations(string boxes) {
        vector<int> result ;
        for(int i = 0 ; i < boxes.size() ; i++){
            int res = 0 ;
            for(int j = 0 ; j < boxes.size() ; j++){
                if(boxes[j]=='1'){
                    res += abs(i-j) ;
                }
            }
            result.push_back(res) ;
        }
        return result ;
    }

int main() {
    vector<int>res = minOperations("1101" ) ;
    for(int i : res) {
        cout<<i<" " ;
    }
    return 0 ;
}