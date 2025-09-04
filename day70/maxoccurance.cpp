#include<bits/stdc++.h>
using namespace std;

int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int > hash ;
        for(int i : arr) hash[i]++ ;
        int maxocc = -1 ;
        for(auto i : hash) maxocc = max(i.second , maxocc);
        for(auto i : hash) {
            if(i.second == maxocc){
                return i.first ;
            }
        }
        return -1 ;
    }

int main () {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4};
    int specialInteger = findSpecialInteger(arr);
    cout << "Special Integer: " << specialInteger << endl;
    return 0;
}