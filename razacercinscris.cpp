#include <bits/stdc++.h>
using namespace std;

// unfinished
int main() {
    double a, b, c, s, p;
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
           p = ((a+b+c)/2);
           s = (sqrt(p*(p-a)*(p-b)*(p-c)));
           cout << fixed << setprecision(2) << (s/p);

    } else cout << "Imposibil";
    return 0;
}
// unfinished