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
const ll INF = 1e18;
const int MAX_N = 200010;
ll a[MAX_N], b[MAX_N], x[MAX_N], dp[MAX_N];
vector<int> to[MAX_N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; ++i) {
        cin >> a[i] >> b[i] >> x[i];
        to[i].push_back(i + 1);
        to[x[i]].push_back(i);
    }
    fill(dp, dp + n + 1, INF);
    dp[1] = 0;
    for (int i = 1; i <= n; ++i) {
        for (auto j : to[i]) {
            if (j == i + 1)
                dp[j] = min(dp[j], dp[i] + a[i]);
            else
                dp[j] = min(dp[j], dp[i] + b[i]);
        }
    }
    cout << dp[n] << endl;
    return 0;
}

/***************thinking***************/
/*

*/