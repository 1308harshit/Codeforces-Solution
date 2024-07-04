#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int main() {

    int t;
    cin >> t;
    vector<int>ans;


    while (t--) {
        string a, b;
        cin >> a >> b;

        unordered_set<char> ans_set(a.begin(), a.end());
        int n = a.size();
        int m = b.size();

        // extra char
        int ec = 0;
        for (char c : b) {
            if (ans_set.find(c)==ans_set.end()) {
                ec++;
            }
        }

        // cout << n + ec << endl;
        ans.push_back(n+ec);
    }

    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}