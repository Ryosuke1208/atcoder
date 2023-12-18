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
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    vector<int> cnt(n, 0);
    cnt[0] = 0;
    for (int i = 1; i < n; i++) {
        int count = 0;
        if (s[i] == s[i - 1]) count++;
        cnt[i] = cnt[i - 1] + count;
    }
    int l[300010], r[300010];
    rep(i, q) cin >> l[i] >> r[i], l[i]--, r[i]--;
    rep(i, q) cout << cnt[r[i]] - cnt[l[i]] << endl;
    return 0;
}

/***************thinking***************/
/*

*/