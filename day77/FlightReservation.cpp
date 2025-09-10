#include <iostream>
#include <vector>

using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> result(n+1,0);
        for(auto i : bookings){
            for(int j = i[0] ; j <= i[1] ; j++){
                result[j] = result[j] + i[2] ;
            }
        }
        return vector<int>(result.begin()+1,result.end());
    }

int main() {
    vector<vector<int>> bookings = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    int n = 5;
    vector<int> result = corpFlightBookings(bookings, n);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}