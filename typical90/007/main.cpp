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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));
    int q;
    cin >> q;
    rep(i, q) {
        int b;
        cin >> b;
        auto it = lower_bound(all(a), b) - a.begin();
        int diff1 = inf, diff2 = inf;
        if (it < n) diff1 = abs(b - a[it]);
        if (it > 0) diff2 = abs(b - a[it - 1]);
        cout << min(diff1, diff2) << endl;
    }
    return 0;
}

/***************thinking***************/
/*

*/