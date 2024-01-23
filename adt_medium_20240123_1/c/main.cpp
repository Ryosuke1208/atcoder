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
    ll n, m, t;
    cin >> n >> m >> t;
    vector<ll> a(n + 1);
    vector<ll> b(n + 1);
    for (int i = 1; i <= n - 1; i++) cin >> a[i];
    rep(_, m) {
        int x, y;
        cin >> x >> y;
        b[x] = y;
    }
    int pos = 1;
    while (pos < n) {
        if (a[pos] >= t) {
            cout << "No" << endl;
            return 0;
        }
        t -= a[pos];
        pos++;
        t += b[pos];
    }
    cout << "Yes" << endl;
    return 0;
}

/***************thinking***************/
/*

*/