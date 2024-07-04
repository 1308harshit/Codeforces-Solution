#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s; cin >> s;
    vector<char> dis;

    for(auto ch : s){
        if(find(dis.begin(), dis.end(), ch) != dis.end()){
            continue;
        }else{
            dis.push_back(ch);
        }
    }

    if(dis.size() % 2 != 0){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }

    return 0;
}