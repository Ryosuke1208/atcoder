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
int n, m;
int road[11][11];
int used[11];
int ans;

void dfs(int v, int sum) {
    used[v] = 1;
    ans = max(ans, sum);
    for (int i = 1; i <= n; i++)
        if (!used[i] && road[v][i]) dfs(i, sum + road[v][i]);
    used[v] = 0;
};

int main() {
    cin >> n >> m;
    rep(i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        road[a][b] = c;
        road[b][a] = c;
    }

    for (int i = 1; i <= n; i++) dfs(i, 0);
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/