#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin >> n;
    int cap = 0;
    int in;int out;
    int max_cap = 0;
    while (n--)
    {
        cin >> out >> in;
        cap -= out;
        cap += in;

        if(cap > max_cap){
            max_cap = cap;
        }
    } 
    cout << max_cap;
    return 0;
}