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
    ll n, a, b;
    ll p, q, r, s;
    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;
    string str = "";
    vector<string> ans;
    for (ll i = 0; i < (s - r + 1); i++) str += '.';
    for (ll i = 0; i < (q - p + 1); i++) ans.push_back(str);
    ll st, f;
    st = max(p - a, r - b);
    f = min(q - a, s - b);
    for (ll i = st; i <= f; i++) ans[a + i - p][b + i - r] = '#';
    st = max(p - a, b - s);
    f = min(q - a, b - r);
    for (ll i = st; i <= f; i++) ans[a + i - p][b - i - r] = '#';
    for (ll i = 0; i < (q - p + 1); i++) cout << ans[i] << endl;
    return 0;
}

/***************thinking***************/

/*

*/