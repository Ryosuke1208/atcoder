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
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    auto cmp = [&](int i, int j) -> bool {
        return a[i] * (a[j] + b[j]) > a[j] * (a[i] + b[i]);
    };

    vector<int> idx(n);
    rep(i, n) idx[i] = i;
    stable_sort(idx.begin(), idx.end(), cmp);
    for (auto i : idx) cout << i + 1 << " ";
    cout << endl;
    return 0;
}
/***************thinking***************/
/*

*/