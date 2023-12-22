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
    bool rec[109][109] = {false};
    int w, h, n;
    cin >> w >> h >> n;
    rep(_, n) {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1) {
            rep(i, h) rep(j, x) rec[i][j] = true;
        } else if (a == 2) {
            rep(i, h) {
                for (int j = x; j < w; j++) rec[i][j] = true;
            }
        } else if (a == 3) {
            rep(i, y) rep(j, w) rec[i][j] = true;
        } else {
            for (int i = y; i < h; i++) {
                rep(j, w) rec[i][j] = true;
            }
        }
    }
    int ans = 0;
    rep(i, h) rep(j, w) if (!rec[i][j]) ans++;
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/