#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] != b[0])
                return a[0] > b[0];
            else
                return a[1] < b[1];
        });

        vector<vector<int>> result;
        for (const auto& person : people) {
            result.insert(result.begin() + person[1], person);
        }
        return result;
    }

int main() {
    vector<vector<int>> people = {{7, 0}, {4, 4}, {7, 1}, {5, 0}, {6, 1}, {5, 2}};
    vector<vector<int>> result = reconstructQueue(people);
    
    for (const auto& person : result) {
        cout << "[" << person[0] << ", " << person[1] << "] ";
    }
    cout << endl;
    
    return 0;
}