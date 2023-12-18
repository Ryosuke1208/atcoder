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
    vector<int> a(n), b(n);
    vector<ll> total(n + 1, 0);
    rep(i, n) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(all(b));
    for (int i = n - 1; i >= 0; i--) total[i] += total[i + 1] + b[i];
    rep(i, n) {
        if (i != 0) cout << " ";
        int idx = upper_bound(all(b), a[i]) - b.begin();
        if (idx >= n)
            cout << 0;
        else
            cout << total[idx];
    }
    cout << endl;
    return 0;
}

/***************thinking***************/
/*

*/