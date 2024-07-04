#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string str; cin >> str;
    vector<int> nums;

    for(char ch : str){
        if(ch != '+'){
            nums.push_back(ch-'0');
        }
    }

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i< n-1; i++){
        cout << nums[i] << "+";
    }

    cout << nums[n-1];
}