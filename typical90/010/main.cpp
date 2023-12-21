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
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++) {
        int c, p;
        cin >> c >> p;
        if (c == 1) {
            a[i] = a[i - 1] + p;
            b[i] = b[i - 1];
        } else {
            a[i] = a[i - 1];
            b[i] = b[i - 1] + p;
        }
    }
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    rep(i, q) cin >> l[i] >> r[i];
    rep(i, q) cout << a[r[i]] - a[l[i] - 1] << " " << b[r[i]] - b[l[i] - 1]
                   << endl;
    return 0;
}

/***************thinking***************/
/*

*/