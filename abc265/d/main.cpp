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
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    ll cur = 0;
    set<ll> s({0});
    rep(i, n) {
        int a;
        cin >> a;
        cur += a;
        s.insert(cur);
    }
    fore(x, s) {
        if (s.find(x + p) != s.end() && s.find(x + p + q) != s.end() &&
            s.find(x + p + q + r) != s.end()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}

/***************thinking***************/
/*

*/