#include<bits/stdc++.h>
using namespace std ;

int sumOfEncryptedInt(vector<int>& nums) {
        int result = 0 ; 
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0 ; 
            int num = nums[i] ;
            int max_num = -1 ;
            while(num > 0){
                count++ ;
                if(num % 10 > max_num){
                    max_num = num % 10 ;
                }
                num /= 10 ;
            }
            int number = 0 ;
            for(int j = 0 ; j < count ; j ++){
                number = number * static_cast<int>(pow(10, 1)) + max_num;
            }
            result += number ;
        }
        return result ;
    }

int main() {
    vector<int> nums = {10,21,31} ;
    cout<<sumOfEncryptedInt(nums) ;
    return 0 ;
}