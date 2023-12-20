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
    ll n, l, k;
    cin >> n >> l >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    auto check = [&](ll x) -> bool {
        ll num = 0;
        ll pre = 0;
        rep(i, n) {
            if (a[i] - pre >= x) {
                num++;
                pre = a[i];
            }
        }
        if (l - pre >= x) ++num;

        return (num >= k + 1);
    };

    ll left = -1, right = l + 1;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if (check(mid))
            left = mid;
        else
            right = mid;
    }
    cout << left << endl;
    return 0;
}

/***************thinking***************/
/*

*/