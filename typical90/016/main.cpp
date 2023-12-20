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
    ll a, b, c, n;
    cin >> n >> a >> b >> c;
    ll ans = 10000;
    for (ll i = 0; i <= 9999; i++) {
        for (ll j = 0; j <= 9999; j++) {
            ll m = i * a + j * b;
            if (n < m || (n - m) % c != 0) continue;
            ans = min(ans, i + j + (n - m) / c);
        }
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/