#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
    int m = img.size();
        if (m == 0) return {};
        int n = img[0].size();
        vector<vector<int>> out(m, vector<int>(n, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int sum = 0;
                int cnt = 0;

                for (int di = -1; di <= 1; ++di) {
                    int r = i + di;
                    if (r < 0 || r >= m) continue;
                    for (int dj = -1; dj <= 1; ++dj) {
                        int c = j + dj;
                        if (c < 0 || c >= n) continue;
                        sum += img[r][c];
                        ++cnt;
                    }
                }

                out[i][j] = sum / cnt;
            }
        }

        return out;
    }

int main() {
    vector<vector<int>> img = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    vector<vector<int>> result = imageSmoother(img);
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    return 0;
}