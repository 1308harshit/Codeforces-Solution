#include <iostream>
#include <vector>

using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;

    for(int i = 1; i <= w; i++){
        total += i * k;
    }

    int borrow = total - n;
    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow;

    return 0;
}