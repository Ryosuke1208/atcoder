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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<int> cnt(2000005, 0);
    rep(i, n) {
        ll x = a[i];
        for (ll j = 2; j * j <= x; j++) {
            if (x % (j * j) == 0) {
                while (x % (j * j) == 0) x /= (j * j);
            }
        }
        cnt[x]++;
    }

    ll ans = 0;
    for (int i = 0; i <= 2000000; i++) {
        ans += (ll)cnt[i] * (cnt[i] - 1) / 2;
    }
    ans += (ll)cnt[0] * (n - cnt[0]);
    cout << ans << endl;

    return 0;
}

/***************thinking***************/
/*

*/