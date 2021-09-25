#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x, y, n;
    cin >> x >> y >> n;
    cout << n/(x*y) << '\n' << (n-(n/(x*y))*(x*y))/y << '\n' << (n-(n/(x*y))*(x*y))-(n-(n/(x*y))*(x*y))/y*y;
}