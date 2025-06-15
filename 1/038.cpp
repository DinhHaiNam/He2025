#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c;
    d = 0;
    if (a <= x) d++;
    if (b <= x) d++;
    if (c <= x) d++;
    cout << d;
}