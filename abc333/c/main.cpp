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
    ll n;
    cin >> n;
    const ll l = 12;
    vector<ll> r(l);
    rep(i, l) r[i] = stoll(string(i + 1, '1'));
    set<ll> s;
    rep(i, l) {
        rep(j, l) {
            rep(k, l) { s.insert(r[i] + r[j] + r[k]); }
        }
    }
    vector<ll> ns(all(s));
    sort(all(ns));
    cout << ns[n - 1] << endl;
    return 0;
}
/***************thinking***************/
/*

*/