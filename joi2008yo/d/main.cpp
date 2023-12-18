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
    vector<P> sm, sn;
    int m, n;
    cin >> m;
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        sm.push_back(P(x, y));
    }
    cin >> n;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        sn.push_back(P(x, y));
    }
    set<P> st;
    fore(s, sn) st.insert(s);
    P base = sm[0];
    fore(s, sn) {
        int dx = s.first - base.first;
        int dy = s.second - base.second;

        bool ok = true;
        fore(m, sm) {
            if (st.find(P(m.first + dx, m.second + dy)) == st.end()) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << dx << " " << dy << endl;
            return 0;
        }
    }
    cout << "0 0" << endl;
    return 0;
}

/***************thinking***************/
/*

*/