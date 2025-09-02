#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sumapples = 0 ;
        for(int i : apple ){
            sumapples += i ;
        }
        int c = 0 ;
        sort(capacity.begin(), capacity.end(), greater<int>());
        for(int i =0 ; i < capacity.size() ; i++){
            c+=capacity[i] ;
            if(c >= sumapples){
                return i+1 ;
            }
        }
        return -1 ;
    }

int main(){
    vector<int> apple = {1, 2, 3};
    vector<int> capacity = {3, 2, 1};
    int result = minimumBoxes(apple, capacity);
    cout << "Minimum boxes required: " << result << endl;
    return 0;
}