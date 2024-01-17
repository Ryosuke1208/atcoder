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
    int s[8];
    rep(i, 8) cin >> s[i];
    bool ok = true;
    rep(i, 8) {
        if (i > 0) {
            if (s[i - 1] > s[i]) {
                ok = false;
                break;
            }
        }
        if (s[i] < 100 || 675 < s[i]) {
            ok = false;
            break;
        }
        if (s[i] % 25 != 0) {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
/***************thinking***************/
/*

*/