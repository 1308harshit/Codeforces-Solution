#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for(int i = 0; i < n; i++){
//             cin >> arr[i];
//         }

//         long long c = 0; //coins
//         for(int i = 1; i,n; ++i){
//             if(arr[i] < arr[i-1]){
//                 c += arr[i-1] - arr[i];
//                 arr[i] = arr[i-1];
//             }
//         }

//         cout << c << endl;
//     }

//     return 0;
// }


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int min_sec = (n+k-1)/k*k;
        cout << min_sec << endl;
    }

    return 0;
}