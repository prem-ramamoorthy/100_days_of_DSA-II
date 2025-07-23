#include<bits/stdc++.h>
using namespace std;

vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result ;
        for(int i = 0 ; i < A.size() ; i++){
            int count = 0 ;
            unordered_set<int> res(A.begin(), A.begin()+i+1) ;
            unordered_set<int> res2(B.begin(), B.begin()+i+1) ;
            for(int i : res){
                if(res2.count( i )){
                    count++;
                }
            }
            result.push_back(count) ;
        }
        return result ;
    }

int main() {
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};
    vector<int> result = findThePrefixCommonArray(A, B);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}