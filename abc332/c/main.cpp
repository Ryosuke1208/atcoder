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
    int n, m;
    string s;
    cin >> n >> m >> s;
    int ans = 0;
    for (int i = 0; i <= 1000; i++) {
        int w = m;
        int t = i;
        bool flg = true;
        rep(j, n) {
            if (s[j] == '0') {
                w = m;
                t = i;
            } else if (s[j] == '1') {
                if (w)
                    w--;
                else
                    t--;
            } else {
                t--;
            }
            if (w < 0 || t < 0) {
                flg = false;
                break;
            }
        }
        if (flg) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/