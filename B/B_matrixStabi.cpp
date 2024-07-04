#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const int dirx[4] = {0, 0, 1, -1}; 
const int diry[4] = {1, -1, 0, 0}; 

bool foundMax(const vector<vector<int>>& a, int i, int j) {
    int n = a.size();
    int m = a[0].size();
    for (int d = 0; d < 4; ++d) {
        int n_i = i + dirx[d];
        int n_j = j + diry[d];
        if (n_i >= 0 && n_i < n && a[n_i][n_j] >= a[i][j] && n_j >= 0 && n_j < m) {
            return false;
        }
    }
    return true;
}

void stabilizeMatrix(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> prioq;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (foundMax(a, i, j)) {
                prioq.push({a[i][j], i, j});
            }
        }
    }

    while (!prioq.empty()) {

        auto [value, i, j] = prioq.top();
        prioq.pop();

        if (!foundMax(a, i, j)){
            continue;   
        }

        a[i][j]--;

        for (int d = 0; d < 4; ++d) {
            int n_i = i + dirx[d];
            int n_j = j + diry[d];
            if (n_i >= 0 && n_i < n && foundMax(a, n_i, n_j) && n_j >= 0 && n_j < m ) {
                prioq.push({a[n_i][n_j], n_i, n_j});
            }
        }
    }
}

int main() {
    // int t;
    // cin >> t;
    // while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }

        stabilizeMatrix(a);

        for (auto& row : a) {
            for (auto& elem : row) {
                cout << elem << " ";
            }
            cout << "\n";
        }
    // }

    return 0;
}


