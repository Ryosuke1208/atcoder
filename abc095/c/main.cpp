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
    int A, B, AB, x, y;
    cin >> A >> B >> AB >> x >> y;
    ll ans = infl;
    rep(i, 200020) {
        ll total = 0;
        int a = i / 2;
        int b = i / 2;
        total += AB * i;
        if (a < x) total += A * (x - a);
        if (b < y) total += B * (y - b);
        ans = min(ans, total);
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/