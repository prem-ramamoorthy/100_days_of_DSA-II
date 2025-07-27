#include<bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result ;
        int j = 0 ;
        for(int i = 1 ; i <= n && j < target.size() ; ++i){
            if(i == target[j]){
                result.push_back("Push") ;
                ++j;
            }
            else{
                result.push_back("Push") ;
                result.push_back("Pop") ;
            }
        }
        return result ;
    }

int main() {
    vector<int> target = {1, 3};
    int n = 3;
    vector<string> result = buildArray(target, n);
    for (const auto& action : result) {
        cout << action << " ";
    }
    cout << endl;
    return 0;
}