#include<bits/stdc++.h>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        int maxFreq = 0;
        for (char task : tasks) {
            freq[task]++;
            maxFreq = max(maxFreq, freq[task]);
        }
        int maxCount = 0;
        for (auto& entry : freq) {
            if (entry.second == maxFreq) {
                maxCount++;
            }
        }
        int partCount = maxFreq - 1;
        int partLength = n + 1;
        int emptySlots = partCount * partLength + maxCount;

        return max((int)tasks.size(), emptySlots);
    }

int main(){
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;
    cout<<leastInterval(tasks,n);
    return 0;
}