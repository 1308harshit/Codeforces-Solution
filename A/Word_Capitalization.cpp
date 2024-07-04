#include <iostream>
#include <vector>
#include <string>
#include <cctype> // for toupper function
using namespace std;

int main(){

    string w;
    cin >> w;

    w[0] = toupper(w[0]);
    cout << w;

    return 0;
}