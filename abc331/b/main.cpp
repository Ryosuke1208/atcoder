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
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int dp[109];
    rep(i, 7) dp[i] = min(s, min(m, l));
    for (int i = 7; i <= 8; i++) dp[i] = min(dp[i - 6] + s, min(m, l));
    for (int i = 9; i <= 12; i++)
        dp[i] = min(dp[i - 6] + s, min(dp[i - 8] + m, l));
    for (int i = 13; i <= 100; i++)
        dp[i] = min(dp[i - 6] + s, min(dp[i - 8] + m, dp[i - 12] + l));
    // rep(i, 101) cout << dp[i] << endl;
    cout << dp[n] << endl;
    return 0;
}

/***************thinking***************/
/*

*/