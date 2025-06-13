#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z, t, d;
    cin >> x >> y >> z >> t;
    d = 0;
    if (x != 0) d++;
    if (y != 0) d++;
    if (z != 0) d++;
    if (t != 0) d++;
    if (d >= 2) cout << "YES";
    else cout << "NO";
}