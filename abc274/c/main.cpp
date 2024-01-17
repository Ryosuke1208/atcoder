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
    vector<int> a(n + 1);
    vector<int> b(2 * n + 2);
    for (int i = 1; i <= n; i++) cin >> a[i];
    b[1] = 0;
    for (int i = 1; i <= n; i++) {
        b[2 * i] = b[a[i]] + 1;
        b[2 * i + 1] = b[a[i]] + 1;
    }
    for (int i = 1; i <= 2 * n + 1; i++) {
        cout << b[i] << endl;
    }
    return 0;
}

/***************thinking***************/
/*

*/