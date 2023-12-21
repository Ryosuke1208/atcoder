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
int main() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    vector<int> mod_a(46), mod_b(46), mod_c(46);
    rep(i, n) {
        mod_a[a[i] % 46]++;
        mod_b[b[i] % 46]++;
        mod_c[c[i] % 46]++;
    }
    ll ans = 0;
    rep(i, 46) {
        rep(j, 46) {
            rep(k, 46) {
                if ((i + j + k) % 46 == 0)
                    ans += (ll)(mod_a[i]) * mod_b[j] * mod_c[k];
            }
        }
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/