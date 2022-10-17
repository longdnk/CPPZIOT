#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define ul unsigned long
#define ld long double
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define FORUP(i, star, end) for (int i = star; i <= end; ++i)
#define FORDOWN(i, star, end) for (int i = end; i >= star; --i)
#define FORAUTO(item, m) for (auto item : m)
#define foreach(vector) for (auto it : vector) cout << it << ' ';
#define Map_Foreach(map) for (auto it : map) cout << it.fi << ' ' << it.se << "\n";
#define rep(i, n) for (ll i = 0; i < n; ++i)
#define rev(i, n) for (ll i = n - 1; i >= 0; --i)
#define AutoInputArray(a, b, x) FORUP(a, 1, b) cin >> x[i];
#define AutoInputArrayFr0(a, b, x) rep(0, n) cin >> x[i];
#define whatis(x) cout << "Line " << __LINE__ << ": " << #x << " = " << (x) << ", ";
#define ShowTime() cerr << "Durex Executed in " << clock() * 1000 / CLOCKS_PER_SEC << " ms";
#define UpCase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define LowCase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define len(x) (int)x.size()
#define endl '\n'
#define elif else if

inline void debug_out() { cerr << endl; }
inline void in() { }
inline void out() { }
inline void read() { }

// #ifdef WINDOWS
inline int getchar_unlocked() { return _getchar_nolock(); }
inline int putchar_unlocked(char c) { return _putchar_nolock(c); }
// #endif

template <typename Head, typename... Tail> inline void debug_out(Head H, Tail... T) { cerr << " " << H << ","; debug_out(T...); }
template <typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << p.first << " " << p.second << endl; }
template <typename a, typename b, typename c> ostream &operator<<(ostream &os, const pair<a, pair<b, c>> &p) { return os << p.second.first << ' ' << p.second.second; }
template <typename T> inline void inp(T &x) { x = 0; bool neg = 0; T c = getchar_unlocked(); if (c == '-') neg = 1, c = getchar_unlocked(); while ((c < 48) || (c > 57)) c = getchar_unlocked(); for (; c < 48 or c > 57; c = getchar_unlocked()); for (; c > 47 && c < 58; c = getchar_unlocked()) x = (x << 3) + (x << 1) + (c & 15); if (neg) x *= -1; }
template <typename T> inline void outp(T n) { bool neg = 0; if (n < 0) n *= -1, neg = 1; char snum[100009]; int i = 0; do { snum[i++] = n % 10 + '0'; n /= 10; } while (n); --i; if (neg) putchar_unlocked('-'); while (i >= 0) putchar_unlocked(snum[i--]); putchar_unlocked(' '); }
template <typename T, typename... Args> inline void in(T &num, Args&... args) { inp(num); in(args...); }
template <typename T, typename... Args> inline void out(T first, Args... args) { outp(first); out(args...); }
template <typename T> inline void out(T fi) { cout << fi; putchar_unlocked(endl); }
template <class T> inline void readln(T &x) { static char ch; static bool neg; for (ch = neg = 0; ch < '0' || '9' < ch; neg |= ch == '-', ch = getchar_unlocked()); for (x = 0; '0' <= ch && ch <= '9'; (x *= 10) += ch - '0', ch = getchar_unlocked()); x = neg ? -x : x; }
template <class T, typename... Args> inline void read(T &num, Args&... args) { readln(num), read(args...); }
#define debug(...) cerr << "(" << #__VA_ARGS__ << "):", debug_out(__VA_ARGS__)