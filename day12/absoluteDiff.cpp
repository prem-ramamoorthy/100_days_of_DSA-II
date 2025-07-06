#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result ;
        int n = arr.size() ;
        int mindiff = INT_MAX ;
        sort(arr.begin() , arr.end() ) ;
        for(int i = 1 ; i < n ; i++){
            mindiff = min(mindiff , arr[i] - arr[i-1]) ;
        }
        for(int i = 1 ; i < n ; i ++){
            if((arr[i] - arr[i-1]) == mindiff) {
                result.push_back({arr[i-1] , arr[i]}) ;
            }
        }
        return result ;
    }

int main(){
    vector<int> arr = {4,2,1,3};
    vector<vector<int>> result = minimumAbsDifference(arr);
    for(auto& pair : result) {
        cout << "[" << pair[0] << "," << pair[1] << "] ";
    }
    return 0;
}