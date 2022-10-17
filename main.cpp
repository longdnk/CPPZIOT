#include <bits/stdc++.h>
#include "algo/debug.cpp"
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ld long double
const int maxn = 1e6 + 9;
int i = 1, j, index = 1;
char *fileIn = "input.js", *fileOut = "output.js";

auto module_split = []() {
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
        if (s.find("dataInput5") != string::npos) {
            break;
        }
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
};

auto module_total = []() {
    string s, token;
    vector<string> time, kwh;
    vector<pair<string, string>> total;
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
        string flag_time = "", flag_kwh = "";
        if (s.find("dataInput5") != string::npos) {
            break;
        }

        if (s.find("timestamp_unix") != string::npos) {
            j = 1;
            stringstream ss(s);
            while (ss >> token) {
                if (!(j & 1)) {
                    time.emplace_back(token);
                }
                ++j;
            }
        }
        if (s.find("kWH") != string::npos) {
            index = 1;
            stringstream ss(s);
            while (ss >> token) {
                if (!(index & 1)) {
                    kwh.emplace_back(token);
                }
                ++index;
            }
        }
    }
    cout << "const neoDataInput4 = [\n";
    for (int i = 0; i < kwh.size(); ++i) {
        cout << "{" << "\"time\": " << time[i] << " " << "\"kWH\": " << kwh[i] << "}" << '\n';
    }
    cout << "]\n";

    // cout << "const allTime = {\n";
    // for (auto item : time) {
    //     cout << "\t\"timestamp_" << index << "\":" << ' ' << item << "\n";
    //     ++index;
    // }
    // cout << "}\n";
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen(fileIn, "r", stdin);
    freopen(fileOut, "w", stdout);
    cout << fixed << setprecision(5);
    // module_split();
    module_total();
    ShowTime();
}