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
    int M, D;
    cin >> M >> D;
    int y, m, d;
    cin >> y >> m >> d;
    if (d == D) {
        if (m == M)
            cout << y + 1 << " " << 1 << " " << 1 << endl;
        else
            cout << y << " " << m + 1 << " " << 1 << endl;
    } else
        cout << y << " " << m << " " << d + 1 << endl;
    return 0;
}

/***************thinking***************/
/*

*/