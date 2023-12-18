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
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    vector<unordered_set<int>> st(n);
    rep(i, l) {
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        st[c].insert(d);
    }
    vector<int> bi(m);
    rep(i, m) bi[i] = i;
    // これで降順に並べられる
    sort(all(bi), [&](int i, int j) { return b[i] > b[j]; });
    int ans = 0;
    rep(i, n) {
        for (int j : bi) {
            if (st[i].count(j)) continue;
            ans = max(ans, a[i] + b[j]);
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/