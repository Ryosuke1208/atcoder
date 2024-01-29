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
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

using P = pair<int, int>;
// using mint = modint998244353;
/********************************************/

int main() {
    ll n;
    cin >> n;
    vector<ll> q(n), a(n), b(n);
    rep(i, n) cin >> q[i];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    ll ans = 0;
    for (int j = 0; j <= 1000009; j++) {
        vector<ll> tmp;
        tmp = q;
        bool ok = false;
        rep(i, n) {
            tmp[i] -= a[i] * j;
            if (tmp[i] < 0) {
                ok = true;
                break;
            }
        }
        if (ok) continue;
        ll cnt = inf;
        rep(i, n) if (b[i]) cnt = min(cnt, tmp[i] / b[i]);
        if (cnt != inf) ans = max(ans, cnt + j);
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/