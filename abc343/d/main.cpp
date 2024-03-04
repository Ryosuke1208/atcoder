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
    int n, t;
    cin >> n >> t;
    vector<ll> s(n + 1, 0);
    map<ll, ll> ma;
    ma[0] = n;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        ma[s[a]]--;
        if (!ma[s[a]]) ma.erase(s[a]);
        s[a] += b;
        ma[s[a]]++;
        // fore(m, ma) cout << m.first << endl;
        cout << ma.size() << endl;
    }
    return 0;
}

/***************thinking***************/
/*

*/