#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do
    {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main()
{
    vector<int> nums = {1,2,3} ;
    int result = permute(nums).size() ;
    cout<<result ;
    return 0;
}