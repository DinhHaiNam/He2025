#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    if (m == 2) cout <<"28";
    else if (m <= 7) {
        if (m % 2 == 0) cout << "30";
        else cout << "31";
    }
    else {
        if (m % 2 == 0) cout << "31";
        else cout << "30";
    }
}