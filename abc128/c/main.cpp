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
    vector<int> s[19];
    int p[19];
    rep(i, m) {
        int k;
        cin >> k;
        rep(j, k) {
            int S;
            cin >> S, S--;
            s[i].push_back(S);
        }
    }
    rep(i, m) cin >> p[i];
    int ans = 0;
    rep(msk, 1 << n) {
        int ok = 0;
        rep(i, m) {
            int cnt = 0;
            fore(j, s[i]) if (msk & (1 << j)) cnt++;
            if (cnt % 2 == p[i]) ok++;
        }
        if (ok == m) ans++;
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/