#include<bits/stdc++.h>
using namespace std;

int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> boxes ;
        for(int i = lowLimit ; i <= highLimit ; i++){
            int digiSum = 0 ;
            int n = i ;
            while(n > 0){
                digiSum += n % 10 ;
                n /= 10 ;
            }
            boxes[digiSum]++;
        }
        int maxi = -1 ;
        for(auto i : boxes){
            maxi = max(i.second , maxi) ;
        }
        return maxi ;
    }

int main() {
    int lowLimit = 1;
    int highLimit = 100;
    int result = countBalls(lowLimit, highLimit);
    cout << "Maximum number of balls in any box: " << result << endl;
    return 0;
}