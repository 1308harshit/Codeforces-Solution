#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin >>t;
    while(t--){
        int pw = 1;
        vector<int> v;
        int n;cin >>n;
        while(n){
            if(n%10)
                v.push_back((n%10)*pw);
            n /= 10;
            pw *= 10;
        }

        cout << v.size() << endl;

        for(int i : v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}