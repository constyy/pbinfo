#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int x;
    cin >> x;
    double y = (3*((x*x)+(x*x*x*x))) / ((x*x)+(x*x*x*x)+(double)sqrt((x*x)+(x*x*x*x))) + ((double)sqrt((x*x)+(x*x*x*x)));
    cout << (int) y;
    return 0;
}