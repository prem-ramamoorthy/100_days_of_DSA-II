#include<bits/stdc++.h>
using namespace std ;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result(nums1.begin() , nums1.begin()+m) ;
        for(int i = 0 ; i < nums2.size() ; i++){
            int it = 0 ;
            for(int j = it ; j < result.size() ; j++){
                if(result[j] > nums2[i]){
                    break ;
                }
                else{
                    it++;
                }
            }
            result.insert(result.begin()+it , nums2[i]) ;
        }
        nums1 = result ;
    }

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    for(int i = 0 ; i < nums1.size() ; i++){
        cout << nums1[i] << " " ;
    }
    return 0 ;
}