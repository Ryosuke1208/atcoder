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
    vector<ll> s(n), t(n), ans(n, inf);
    rep(i, n) cin >> s[i];
    rep(i, n) cin >> t[i];
    rep(i, n) {
        int ne = (i + 1) % n;
        t[ne] = min(t[ne], t[i] + s[i]);
    }
    rep(i, n) {
        int ne = (i + 1) % n;
        t[ne] = min(t[ne], t[i] + s[i]);
    }
    rep(i, n) cout << t[i] << endl;
    return 0;
}

/***************thinking***************/
/*

*/