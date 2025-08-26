#include<bits/stdc++.h>
using namespace std ;

int arraySign(vector<int>& nums) {
        int result = 1 ;
        for(int i : nums){
            if(i < 0){
                result = -result ;
            }
            if(i == 0){
                return 0 ;
            }
        }
        
        return result  ;
    }

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << arraySign(arr) << endl;
    return 0;
}