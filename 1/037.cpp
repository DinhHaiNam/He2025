#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    int z;
    cin >> x >> y;
    z = 0;
    if (x >= 8.0) z++;
    if (y >= 8.0) z++;
    cout << (10000*z);
}