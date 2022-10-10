#include <bits/stdc++.h>
#include "algo/debug.cpp"
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
const int maxn = 1e6 + 9;
int i = 1, j, index = 1;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.js", "r", stdin);
    freopen("output.js", "w", stdout);
    cout << fixed << setprecision(5);
    string s, token;
    vector<string> time, kwh;
    auto preProcess = [&](string f, vector<string> &type) {
        if (s.find(f) != string::npos) {
            j = 1;
            stringstream ss(s);
            while (ss >> token) {
                if (!(j & 1)) type.emplace_back(token);
                ++j;
            }
        }
        j = 1;
    };
    while (getline(cin, s)) {
        preProcess("timestamp_unix", time);
        preProcess("kWH", kwh);
    }
    // sort(v.begin(), v.end());
    cout << "const allTime = {\n";
    for (auto item : time) {
        cout << "\t\"timestamp_" << index << "\":" << ' ' << item << "\n";
        ++index;
    }
    cout << "}\n";
    index = 1;
    cout << "const kwh = {\n";
    for (auto item : kwh) {
        cout << "\t\"kwh_" << index << "\":" << ' ' << item << ",\n";
        ++index;
    }
    cout << "}";
    ShowTime();
}