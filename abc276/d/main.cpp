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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    set<int> st;
    vector<int> a2(n), a3(n);
    rep(i, n) {
        int x = a[i];
        while (x % 2 == 0) {
            x /= 2;
            a2[i]++;
        }
        while (x % 3 == 0) {
            x /= 3;
            a3[i]++;
        }
        st.insert(x);
    }
    if (st.size() != 1) {
        cout << -1 << endl;
        return 0;
    }
    auto f = [](vector<int> a) {
        int n = a.size();
        int mi = inf;
        rep(i, n) mi = min(mi, a[i]);
        int res = 0;
        rep(i, n) res += a[i] - mi;
        return res;
    };
    int ans = f(a2) + f(a3);
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/