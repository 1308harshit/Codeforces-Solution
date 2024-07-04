#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a, nos, rem;
    cin >> a >> nos;

    while(nos--){
        rem = a % 10; //last digit
        if(rem == 0){
            a /= 10;
        }else{
            a -= 1;
        }
    }

    cout << a << endl;
    return 0;
}