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
vector<int> era(int n) {
    vector<int> v(n + 1, 1);
    v[0] = v[1] = 0;
    for (int i = 2; i < sqrt(n); i++) {
        if (v[i]) {
            for (int j = 0; i * (j + 2) < n; j++) {
                v[i * (j + 2)] = 0;
            }
        }
    }
    return v;
}

const int N = 1e5 + 9;
int a[N], b[N];

int main() {
    auto pr = era(N);
    for (int i = 1; i < N; i += 2)
        if (pr[i] && pr[(i + 1) / 2]) a[i] = 1;
    for (int i = 1; i < N; i++) b[i] = b[i - 1] + a[i];

    int q;
    cin >> q;
    rep(_, q) {
        int l, r;
        cin >> l >> r;
        int ans = b[r] - b[l - 1];
        cout << ans << endl;
    }

    return 0;
}
/***************thinking***************/
/*

*/