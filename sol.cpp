#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int64_t t, a, b, n, lcd, mid, T, cnt, l, r;

inline void solve() {
    cin >> a >> b >> n;
    lcd = a / __gcd(a, b) * b, T = lcd / a + lcd / b - 1, cnt = n / T;
    l = cnt * lcd, r = (cnt + 1) * lcd;
    while (l < r) {
        mid = (r + l) >> 1;
        if (mid / a + mid / b - mid / lcd < n) l = mid + 1;
        else r = mid;
    }
    cout << l << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        solve();
    }
}