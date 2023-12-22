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
    int c;
    cin >> c;
    int g[109][3];
    rep(i, c) {
        vector<int> s(3);
        cin >> s[0] >> s[1] >> s[2];
        sort(all(s));
        g[i][0] = s[0];
        g[i][1] = s[1];
        g[i][2] = s[2];
    }
    int n = 0, m = 0, l = 0;
    rep(i, c) {
        n = max(n, g[i][0]);
        m = max(m, g[i][1]);
        l = max(l, g[i][2]);
    }
    cout << n * m * l << endl;
    return 0;
}
/***************thinking***************/
/*

*/