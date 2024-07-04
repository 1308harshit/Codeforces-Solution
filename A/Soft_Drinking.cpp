#include <iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >>p >>nl >>np;

    int td = k*l;
    int ts = c*d;
    int s = p;

    int tfd = (td)/(n*nl);
    int tfs = (ts)/n;
    int tfsalt = (s)/(n*np);

    int mt = min(tfd, min(tfs, tfsalt));

    cout << mt;
    return 0;
}
