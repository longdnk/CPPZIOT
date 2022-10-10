#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7, maxn = 1e6 + 9;
int64_t l, r, n, k, t, x, mid;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("in", "r", stdin);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int length;
        cin >> length;
        int a[length + 1];
        for (int i = 1; i <= length; ++i) {
            cin >> a[i];
        }
        l = 1, r = length;
        while (l <= r) {
            mid = (r + l) >> 1;
            if (n / a[mid] <= k) {
                x = a[mid];
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << x << '\n';
    }
}