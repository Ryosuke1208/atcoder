/********************tips********************/
// #include <atcoder/all>
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define fore(i, a) for (auto &i : a)
#define all(x) (x).begin(), (x).end()
using namespace std;
// using namespace atcoder;
typedef unsigned long long ll;
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
unordered_map<ll, ll> memo;

ll f(ll x) {
    if (x == 1) return 0;
    if (memo.count(x)) return memo[x];
    ll res = f(x / 2) + f(x - x / 2) + x;
    return memo[x] = res;
}

int main() {
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}

/***************thinking***************/
/*

*/