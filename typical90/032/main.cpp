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
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<vector<bool>> ng(n, vector<bool>(n, false));
    rep(i, n) rep(j, n) cin >> a[i][j];
    int ans = inf;
    vector<int> p(n, 0);
    rep(i, n) p[i] = i;
    int m;
    cin >> m;
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        ng[x][y] = true;
        ng[y][x] = true;
    }
    do {
        int sum = 0;
        rep(i, n) sum += a[p[i]][i];
        bool ok = true;
        rep(i, n - 1) if (ng[p[i]][p[i + 1]]) ok = false;
        if (ok) ans = min(ans, sum);
    } while (next_permutation(all(p)));

    if (ans == inf) ans = -1;
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/