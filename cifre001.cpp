#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m, p, k, a, x1 = 0, x2 = 0, x = 0;
    cin >> n >> m;
    p=n;
    k=m;
    if(p==0) x=1;
    while(n) {
        n/=10;
        x1++;
    }
    while(m) {
        m/=10;
        x2++;
    }
    if(x1 == x2) {
        cout << "DA";
        cout << endl;
        a = 1;
    } else {
        cout << "NU";
        a = 0;
    }
    if (a==1) {
        while (p) {
            if (p%10 == k%10) x++;    
            p/=10;
            k/=10;
        }
        cout << x;
    }

    return 0;    
}