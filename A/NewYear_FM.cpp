#include <iostream>
using namespace std;

int main(){
    int a, b, c, middle;

    cin >> a >> b >> c;

    if((a >= b && a<=c) || (a<=b && a>=c)){
        middle = a;
    }else if ((b >= a && b<=c) || (b<=a && b>=c)){
        middle = b;
    }else{
        middle = c;
    }

    cout << abs(a - middle) + abs(b - middle) + abs(c - middle);
    return 0;
}