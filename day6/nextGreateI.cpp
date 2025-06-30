#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for (int i = 0; i < n1; i++) {
            auto it = find(nums2.begin() , nums2.end() , nums1[i] );
            if(it != nums2.end()){
                int index = distance(nums2.begin() , it) ;
                int curr = nums2[index] ;
                bool valid = true ;
                for(int j = index ; j < n2 ; j++){
                    if(nums2[j] > curr){
                        curr = nums2[j] ;
                        valid = false ;
                        break ;
                    }
                }
                if(valid){
                    result.push_back(-1) ;
                }
                else{
                    result.push_back(curr) ;
                }
            }
            
         }
        return result;
    }

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> result = nextGreaterElement(nums1, nums2);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}