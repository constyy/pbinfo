#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x, y, z; // fie x, y & z valoarea monedelor in ordine
    unsigned m, n, p; // fie m, n & p numarul de monede detinute
    cin >> x >> y >> z >> m >> n >> p;
    cout << x*m+y*n+z*p;
}