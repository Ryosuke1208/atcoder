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
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    a.push_back(0);
    a.insert(a.begin(), 0);
    n += 2;
    for (int i = 1; i < n; i++) a[i] = min(a[i - 1] + 1, a[i]);
    for (int i = n - 2; i > 0; i--) a[i] = min(a[i + 1] + 1, a[i]);
    int ans = 0;
    for (int i = 1; i < n; i++) ans = max(ans, a[i]);
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/