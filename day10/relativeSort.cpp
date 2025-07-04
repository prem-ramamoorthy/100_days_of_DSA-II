#include <bits/stdc++.h>
using namespace std ;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result ;
        map<int,int> hash ;
        for(int i : arr1){
            hash[i]++;
        }
        for(int i : arr2){
            while(hash[i]>0){
                result.push_back(i) ;
                hash[i]--;
            }
            hash.erase(i);
        }
        for(auto i : hash){
            for(int j = 0 ; j < i.second ; j++){
                result.push_back(i.first) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> arr1 = {12, 28, 46, 32, 50, 30, 50};
    vector<int> arr2 = {50, 12, 32, 46, 30};
    vector<int> result = relativeSortArray(arr1, arr2);
    cout<<"[" ;
    for(int i : result ){
        cout<<i << " ," ;
    }
    cout<<"]" ;
}