#include <iostream>
#include <string>
using namespace std;

int main(){

    int t; cin >> t;
    int sum = 0;
    while(t--){
        string sh; cin >> sh;
        if(sh == "Tetrahedron"){
            sum+=4;
        }else if(sh == "Cube"){
            sum+=6;
        }else if(sh == "Octahedron"){
            sum+=8;
        }else if(sh == "Dodecahedron"){
            sum+=12;
        }else{
            sum+=20;
        }
    }
    cout << sum;
    return 0;
}