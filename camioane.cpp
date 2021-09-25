#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned t1, t2, n, m, z; // de unde, t1 = tone de marfa tip1, t2 = tone de marfa tip2, n = camioane tip1, m = camioane tip2, z = zile
    cin >> t1 >> t2 >> n >> m >> z;
    cout << (t1*n+t2*m)*z;
}