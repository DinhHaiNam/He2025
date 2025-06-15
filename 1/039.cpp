#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b, c;
    cin >> x >> a >> b >> c;
    if ((a + b + c) <= x) cout << "3";
    else if ((a + b) <= x || (a + c) <= x || (b + c) <= x) cout << "2";
    else if (a <= x || b <= x || c <= x) cout << "1";
    else cout << 0;
}