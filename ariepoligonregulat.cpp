#include <bits/stdc++.h>
using namespace std;

// unfinished (3803)
int main() {
   int n;
   double l, aria;
   cin >> n >> l;

   aria = n*l*(l/2 * tan(3.14159*(n-2)/2/n))/2;
   aria *= 100;

   cout << int(aria/100) << '.' << int(aria/10)%10 << int(aria)%10;
   return 0;
}
// unfinished (3803)