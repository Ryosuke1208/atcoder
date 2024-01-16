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
    int l, q;
    cin >> l >> q;
    set<int> cut;
    cut.insert(0);
    cut.insert(l);
    rep(_, q) {
        int c, x;
        cin >> c >> x;
        if (c == 1)
            cut.insert(x);
        else {
            auto ato = cut.lower_bound(x);
            auto mae = prev(ato, 1);
            cout << *ato - *mae << endl;
        }
    }
    return 0;
}
/***************thinking***************/
/*

*/