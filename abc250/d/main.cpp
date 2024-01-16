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
vector<int> era(int n) {
    vector<int> res;
    vector<bool> isprime(n, true);
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i < n; i++) {
        if (isprime[i]) {
            res.push_back(i);
            for (int j = i * 2; j < n; j += i) isprime[j] = false;
        }
    }
    return res;
}

int main() {
    ll n;
    cin >> n;

    vector<int> pr = era(1e6);

    ll ans = 0;
    for (ll q : pr) {
        if (q * q * q > n) break;
        ll pmax = min(q - 1, n / q / q / q);
        ll l = -1, r = pr.size();
        while (r - l > 1) {
            ll m = (l + r) / 2;
            if (pr[m] > pmax)
                r = m;
            else
                l = m;
        }
        ans += r;
    }
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/