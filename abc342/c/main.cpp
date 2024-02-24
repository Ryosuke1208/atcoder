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
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
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
    cin >> n >> s >> q;
    vector<int> f(26);
    iota(f.begin(), f.end(), 0);
    while (q--) {
        char c, d;
        cin >> c >> d;
        for (int j = 0; j < 26; j++) {
            if (f[j] == c - 'a') {
                f[j] = d - 'a';
            }
        }
    }
    rep(i, n) { s[i] = 'a' + f[s[i] - 'a']; }
    cout << s << endl;
    return 0;
}

/***************thinking***************/
/*

*/