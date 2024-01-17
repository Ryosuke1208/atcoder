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
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        int ab = i, cd = n - i;
        int ab_cnt = 0, cd_cnt = 0;
        for (int j = 1; j * j <= ab; j++) {
            if (ab % j != 0) continue;
            ab_cnt++;
            if (ab / j != j) ab_cnt++;
        }
        for (int j = 1; j * j <= cd; j++) {
            if (cd % j != 0) continue;
            cd_cnt++;
            if (cd / j != j) cd_cnt++;
        }
        ans += (ab_cnt * cd_cnt);
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/