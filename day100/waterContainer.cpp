#include<bits/stdc++.h>
using namespace std ;

int maxArea(vector<int>& height) {
        int water = 0 ;
        int n = height.size() ;
        int i = 0 ;
        int j = n -1 ;
        while(i<j){
            int h = min(height[i] , height[j]) ;
            int w = j - i ; 
            water = max(water , h*w) ;
            if(height[i] < height[j])i++;
            else j--;
        }
        return water ;
    }

int main() {
    vector<int> nums = {1,2,4,2,1,4} ;
    cout<<maxArea(nums) ;
    return 0 ;
}