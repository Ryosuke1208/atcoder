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
int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> x(n + 1);
    rep(i, n) cin >> x[i + 1];
    vector<ll> b(n + 1);
    rep(i, m) {
        int c, y;
        cin >> c >> y;
        b[c] += y;
    }
    vector dp(n + 1, vector<ll>(n + 1, -infl));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        rep(j, n + 1) {
            ll now = -infl;
            if (j == 0) {
                rep(k, n + 1) now = max(now, dp[i - 1][k]);
            } else {
                now = dp[i - 1][j - 1] + x[i] + b[j];
            }
            dp[i][j] = now;
        }
    }
    ll ans = 0;
    rep(j, n + 1) ans = max(ans, dp[n][j]);
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/