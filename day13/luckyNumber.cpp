#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int>& arr) {
        map<int, int> hash ;
        for(int i : arr){
            hash[i]++;
        }
        int res = -1;
        for(auto i : hash){
            if(i.second == i.first ){
                res = max(res, i.first);
            }
        }
        return res;
    }

int main() {
    vector<int> arr = {2, 2, 3, 4};
    int luckyNumber = findLucky(arr);
    cout << "Lucky Number: " << luckyNumber << endl;
    return 0;
}
