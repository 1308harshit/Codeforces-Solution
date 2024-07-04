#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t; cin >> t;
    int keyPressed = 0;

    while(t--){

        int n; cin >> n;
        // adding (4+3+2+1) for the previous numbers
        int temp = n;
        int keyPressed = 0;

        int lastdig = n%10;
        // 1+2+3+4 = 10
        keyPressed = keyPressed + (10 * (lastdig-1));

        vector<int> a{1, 3, 6, 10};

        int digits = 0;

        while(temp > 0){
            temp = temp/10;
            digits = digits + 1;
        }

        keyPressed+=a[digits-1];
        cout << keyPressed << endl;
    }

    return 0;
}