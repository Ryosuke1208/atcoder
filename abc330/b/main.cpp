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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i, n) {
        if (i != 0) cout << " ";
        if (a[i] <= l)
            cout << l;
        else if (a[i] >= r)
            cout << r;
        else
            cout << a[i];
    }
    cout << endl;
    return 0;
}

/***************thinking***************/
/*

*/