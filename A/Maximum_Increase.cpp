#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll n; 
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maxsub = 1;
    int currsub = 1;

    for(int i = 1; i < n; i++) {
        if(v[i] > v[i - 1]) {
            currsub++;
            maxsub = max(maxsub, currsub);
        } else {
            currsub = 1;
        }
    }

    cout << maxsub;

    return 0;
}