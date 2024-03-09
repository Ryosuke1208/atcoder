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
const ll N = 1e9;
bool ans[N];

int main() {
    int n, m, l;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    cin >> m;
    vector<ll> b(m);
    rep(i, m) cin >> b[i];
    cin >> l;
    vector<ll> c(l);
    rep(i, l) cin >> c[i];
    rep(i, n) {
        rep(j, m) {
            rep(k, l) {
                ll sum = a[i] + b[j] + c[k];
                ans[sum] = true;
            }
        }
    }
    int q;
    cin >> q;
    vector<ll> x(q);
    rep(i, q) cin >> x[i];
    rep(i, q) {
        if (ans[x[i]])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

/***************thinking***************/
/*

*/