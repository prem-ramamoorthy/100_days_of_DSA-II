#include<bits/stdc++.h>
using namespace std;

int hIndex(vector<int>& citations) {
        int n = citations.size();
        set<int> uniq;
        for (int i = 1; i <= n; i++) uniq.insert(i);
        int result = 0;
        for (auto i : uniq) {
            int res = 0;
            for (int j = 0; j < n; j++) {
                if (citations[j] >= i) {
                    res++;
                }
                if (res >= i)
                    break;
            }
            if (res >= i) {
                result = max(result, i);
            }
        }
        return result;
    }

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    cout << hIndex(citations) << endl;
    return 0 ; 
}