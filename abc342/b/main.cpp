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
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int q;
    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;
        int na, nb;
        rep(i, n) if (a == p[i]) {
            na = i;
            break;
        }
        rep(i, n) if (b == p[i]) {
            nb = i;
            break;
        }
        if (na < nb)
            cout << a << endl;
        else
            cout << b << endl;
    }

    return 0;
}

/***************thinking***************/
/*

*/