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
int MOD = 998244353;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> c(n, vector<int>(2, 0));
    vector<vector<int>> dp(n, vector<int>(2, 0));
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        c[i][0] = a;
        c[i][1] = b;
    }
    dp[0][0] = 1;
    dp[0][1] = 1;
    for (int i = 1; i < n; i++) {
        rep(pre, 2) {
            rep(nxt, 2) {
                if (c[i - 1][pre] != c[i][nxt]) dp[i][nxt] += dp[i - 1][pre];
            }
        }
        dp[i][0] %= MOD;
        dp[i][1] %= MOD;
    }
    cout << (dp[n - 1][0] + dp[n - 1][1]) % MOD << endl;
    return 0;
}

/***************thinking***************/
/*

*/