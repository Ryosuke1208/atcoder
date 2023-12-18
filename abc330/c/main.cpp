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
    ll D;
    cin >> D;

    if (sqrt(D) == static_cast<ll>(sqrt(D))) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = D;

    for (ll x = 1; x * x <= D; ++x) {
        ll y = llround(sqrt(D - x * x));

        ans = min(ans, abs(x * x + y * y - D));
        ans = min(ans, abs(x * x + (y + 1) * (y + 1) - D));
    }

    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/