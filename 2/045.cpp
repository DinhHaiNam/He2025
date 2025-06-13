#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, m, n, t;
    cin >> d >> m;
    n = d;

    if (m > 1) n += 31;
    if (m > 2) n += 28;
    if (m > 3) n += 31;
    if (m > 4) n += 30;
    if (m > 5) n += 31;
    if (m > 6) n += 30;
    if (m > 7) n += 31;
    if (m > 8) n += 31;
    if (m > 9) n += 30;
    if (m > 10) n += 31;
    if (m > 11) n + 30;

    //thứ 2 = 0, ...  chủ nhật = 6
    //n = tổng số ngày từ đầu năm đến lúc hỏi
    //công thức tính thứ (n - 1 + thứ bắt đầu năm) % 7
    //2025 bắt đầu thứ tư -> công thức (n + 1) % 7

    t = (n + 1) % 7;
    if (t == 0) cout << "Hai";
    else if (t == 1) cout << "Ba";
    else if (t == 2) cout << "Tu";
    else if (t == 3) cout << "Nam";
    else if (t == 4) cout << "Sau";
    else if (t == 5) cout << "Bay";
    else cout << "CN";
} 