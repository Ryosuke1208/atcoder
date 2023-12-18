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
    vector<int> x(n), y(n), h(n);
    rep(i, n) cin >> x[i] >> y[i] >> h[i];
    rep(cx, 101) rep(cy, 101) {
        int H = 1;
        rep(i, n) if (h[i]) H = h[i] + abs(cx - x[i]) + abs(cy - y[i]);
        int ok = 1;
        rep(i, n) if (max(H - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) ok =
            0;
        if (ok) {
            cout << cx << " " << cy << " " << H << endl;
            return 0;
        }
    }
}

/***************thinking***************/
/*

*/