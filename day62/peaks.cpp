#include<bits/stdc++.h>
using namespace std;

vector<int> findPeaks(vector<int>& mountain) {
        vector<int> result ;
        for(int i = 1 ; i < mountain.size()-1 ; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
                result.push_back(i) ;
            }
        }
        return result ;
    }

int main() {
    vector<int> mountain = {1, 3, 2, 4, 5, 3, 6};
    vector<int> peaks = findPeaks(mountain);
    for(int peak : peaks) {
        cout << peak << " ";
    }
    return 0 ;
}