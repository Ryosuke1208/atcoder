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
const ll MOD = 1e9 + 7;
const int N = 1e5 + 10;
int dp[N] = {0};
bool ng[N] = {false};

int main() {
    int n, m;
    cin >> n >> m;
    rep(_, m) {
        int a;
        cin >> a;
        ng[a] = true;
    }
    dp[0] = 1;
    for (int i = 0; i <= n; i++) {
        if (!ng[i + 1]) dp[i + 1] = (dp[i] + dp[i + 1]) % MOD;
        if (!ng[i + 2]) dp[i + 2] = (dp[i] + dp[i + 2]) % MOD;
    }
    cout << dp[n] << endl;
    return 0;
}
/***************thinking***************/
/*

*/