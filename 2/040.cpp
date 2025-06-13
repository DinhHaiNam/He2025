#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z, d;
    cin >> x >> y >> z;
    d = 0;
    if (x == 1) d++;
    if (y == 1) d++;
    if (z == 1) d++;
    if (d >= 2) cout << "YES";
    else cout << "NO";
}