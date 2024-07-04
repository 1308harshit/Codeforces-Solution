#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#define ll long long

using namespace std;

int main(){

    string table_card; cin >> table_card;
    char table_rank = table_card[0];
    char table_suit = table_card[1];

    vector<string> hand_card(5);
    for(int i = 0 ; i< 5; i++){
        cin >> hand_card[i];
    }

    bool can_play = false;

    for(const string& card: hand_card){
        char hrank = card[0];
        char hsuit = card[1];

        if(hrank == table_rank || hsuit == table_suit){
            can_play = true;
            break;
        }
    }

    if(can_play){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}