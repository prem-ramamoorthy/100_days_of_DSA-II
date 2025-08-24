#include<bits/stdc++.h>
using namespace std ;

bool canMakeArithmeticProgression(vector<int>& arr) {
    if(arr.size() <=2){
            return true ;
        }
        sort(arr.begin() , arr.end()) ;
        int d = arr[1] - arr[0] ;
        for(int i = 1 ; i < arr.size() ;i++){
            if(arr[i] - arr[i-1] != d) {
                return false ;
            }
        }
        return true ;
    }

int main() {
    vector<int> arr = {3, 5, 1};
    cout << canMakeArithmeticProgression(arr) << endl;
    return 0;
}