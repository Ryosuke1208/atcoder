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
    cin >> n >> q;
    vector<string> p(n);
    rep(i, n) cin >> p[i];
    int cnt[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[i - 1][j - 1] == 'B')
                cnt[i][j] = cnt[i][j - 1] + 1;
            else
                cnt[i][j] = cnt[i][j - 1];
        }
    }
    vector<int> ans;
    rep(i,q){
        int a,b,c,d;
    }
    return 0;
}

/***************thinking***************/
/*

*/