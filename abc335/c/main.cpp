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
    int n, q;
    cin >> n >> q;
    deque<P> v;
    rep(i, n) v.push_back(P(i + 1, 0));
    while (q--) {
        int num;
        cin >> num;
        if (num == 2) {
            int p;
            cin >> p;
            cout << v[p - 1].first << " " << v[p - 1].second << endl;
        } else {
            char c;
            cin >> c;
            int x, y;
            x = v[0].first, y = v[0].second;
            if (c == 'R') x++;
            if (c == 'L') x--;
            if (c == 'U') y++;
            if (c == 'D') y--;
            v.pop_back();
            v.push_front(P(x, y));
        }
    }
    return 0;
}

/***************thinking***************/
/*

*/