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
ll base8_to_ll(string n) {
    ll res = 0;
    rep(i, n.size()) res = res * 8 + int(n[i] - '0');
    return res;
}

string ll_to_base9(ll n) {
    if (n == 0) return "0";
    string res;
    while (n > 0) {
        res = char(n % 9 + '0') + res;
        n /= 9;
    }
    return res;
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    rep(i, k) {
        n = ll_to_base9(base8_to_ll(n));
        rep(j, n.size()) {
            if (n[j] == '8') n[j] = '5';
        }
    }
    cout << n << endl;
    return 0;
}

/***************thinking***************/
/*

*/