/********************tips********************/
// #include <atcoder/all>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fore(i, a) for (auto& i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
// using namespace atcoder;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}
using P = pair<int, int>;
// using mint = modint998244353;
/********************************************/

/********************code********************/
int main() {
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0, add = 26;
    for (int i = 1; i <= n - 1; i++) {
        ans += add;
        add *= 26;
    }
    ll num = 0;
    for (int i = 0; i < n; i++) {
        num *= 26;
        num += (s[i] - 'A');
    }
    cout << ans + num + 1 << endl;
    return 0;
}
/***************thinking***************/
/*

*/