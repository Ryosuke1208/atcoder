/********************tips********************/
// #include <atcoder/all>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
// using namespace atcoder;
typedef long long ll;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template <class T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

using P = pair<int, int>;
// using mint = modint998244353;
/********************************************/

/********************code********************/
bool solve(string s) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}

int main() {
    ll n;
    cin >> n;
    for (ll i = 1000000; i >= 0; i--) {
        ll ans = i * i * i;
        if (ans > n) continue;
        string s = to_string(ans);
        if (solve(s)) {
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}

/***************thinking***************/
/*

*/