#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDistance(vector<int>& colors) {
        int n = colors.size() ;
        if(colors[0] != colors[n-1]){
            return n -1 ;
        }
        int lastcolor = 0 ;
        for(int i = n-1 ; i >= 0 ;i--){
            if(colors[0] != colors[i]){
                lastcolor = max(lastcolor , i) ;
                break ;
            }
        }
        for(int i = 0 ; i < n ; i ++){
            if(colors[n-1] != colors[i]) {
                lastcolor = max(lastcolor , n-1-i) ;
                break ;
            }
        }
        return lastcolor ;
    }

int main() {
    vector<int> colors = {1, 2, 3, 4, 5};
    cout << maxDistance(colors) << endl;
    return 0 ;
}