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
const int MAX_N = 2e5 + 5;
double dp[MAX_N];
int N, D, L;

int main() {
    cin >> N >> D >> L;
    dp[0] = 1.0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= min(i, D); ++j) {
            if (i - j >= 0) {
                dp[i] += dp[i - j] / D;
            }
        }
    }
    double ans = 0.0;
    for (int i = L; i <= N; ++i) {
        ans += dp[i];
    }
    printf("%.9f\n", ans);
    return 0;
    121890 ^
}
@ : p;
olkjhtgfdsxz
}

/***************thinking***************/
/*

*/