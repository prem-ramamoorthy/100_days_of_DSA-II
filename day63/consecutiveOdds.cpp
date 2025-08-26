#include <iostream>
#include <vector>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i = 1 ; i < arr.size() -1 ; i++){
            if(arr[i]%2!=0){
                if(arr[i-1]%2!=0){
                    if(arr[i+1]%2!=0){
                        return true ;
                    }
                }
            }
        }
        return false ;
    }

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << threeConsecutiveOdds(arr) << endl;
    return 0 ;
}