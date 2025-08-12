#include<bits/stdc++.h>
using namespace std ;

double trimMean(vector<int>& arr) {
        int n = arr.size() ;
        sort(arr.begin() , arr.end() ) ;
        int nels = (5 * n )/ 100 ;
        for(int i = 0 ; i < nels ; i++){
            arr.erase(arr.begin()) ;
            arr.erase(arr.end()-1) ;
        }
        double result = 0 ;
        for(int i = 0 ; i < arr.size() ; i++){
            result+=arr[i] ;
        }
        return result/arr.size() ;
    }

int main() {
    vector<int> nums = {6, 2, 6, 5, 1, 2};
    cout << trimMean(nums) << endl;
    return 0 ;
}