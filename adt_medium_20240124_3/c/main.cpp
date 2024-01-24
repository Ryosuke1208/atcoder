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
    string x;
    cin >> x;
    bool ok = true;
    if (x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) ok = false;
    int cnt = 0;
    rep(i, 3) {
        if (x[i] - '0' == 9 && x[i + 1] - '0' == 0) {
            cnt++;
        } else if (x[i + 1] - '0' == x[i] - '0' + 1) {
            cnt++;
        }
    }
    if (cnt == 3) ok = false;

    cout << (ok ? "Strong" : "Weak") << endl;
    return 0;
}

/***************thinking***************/
/*

*/