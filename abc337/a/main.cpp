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
    int n;
    cin >> n;
    int a = 0, b = 0;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        a += x, b += y;
    }
    if (a == b) {
        cout << "Draw" << endl;
    } else if (a > b) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
    return 0;
}

/***************thinking***************/
/*

*/