#include<bits/stdc++.h>
using namespace std;

vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even ;
        vector<int> odd ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i%2==0){
                even.push_back(nums[i]) ;
            }
            else{
                odd.push_back(nums[i]) ;
            }
        }
        sort(even.begin() , even.end() , greater<int>()) ;
        sort(odd.begin() , odd.end()) ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 2 == 0){
                nums[i] = even.back() ;
                even.pop_back() ;
            }
            else{
                nums[i] = odd.back() ;
                odd.pop_back() ;
            }
       }
       return nums ;
    }

int main() {
    vector<int> nums = {4, 1, 2, 3};
    vector<int> sorted = sortEvenOdd(nums);
    for (int n : sorted) {
        cout << n << " ";
    }
    return 0;
}