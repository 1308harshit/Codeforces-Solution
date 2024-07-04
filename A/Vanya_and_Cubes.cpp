#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main(){

    int n; cin >> n;
    int total_cubes_used = 0;
    int level = 0;
    while(true){
        level++;
        int total_level_box = (level*(level+1))/2;
        
        if(total_cubes_used + total_level_box <= n){
            total_cubes_used+=total_level_box;
        }else{
            break;
        }        
    }
    cout << level-1 << endl;
    return 0;
}