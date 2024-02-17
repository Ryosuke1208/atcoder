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
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int ans = 0;
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    rep(i, h) {
        rep(j, w) {
            int y = i;
            int x = j;
            if (y < 0 || y >= h || x < 0 || x >= w || s[y][x] == '#') continue;
            bool ok = true;
            rep(k, n) {
                if (t[k] == 'L')
                    x--;
                else if (t[k] == 'R')
                    x++;
                else if (t[k] == 'U')
                    y--;
                else
                    y++;
                if (y < 0 || y >= h || x < 0 || x >= w || s[y][x] == '#') {
                    ok = false;
                    continue;
                }
            }
            if (ok) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/