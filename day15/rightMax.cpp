#include<bits/stdc++.h>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
        vector<int> result ;
        for(int i = 1 ; i < arr.size() ; i ++){
            int maxi = *max_element(arr.begin()+i, arr.end()) ;
            result.push_back(maxi) ;
        }
        result.push_back(-1) ;
        return result ;
    }

int main() {
    vector<int> arr = {17,18,5,4,6,1};
    vector<int> result = replaceElements(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}