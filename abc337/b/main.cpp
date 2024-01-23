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

// using mint = modint998244353;
/********************************************/

/********************code********************/
using P = pair<char, int>;

vector<P> rle(const string &s) {
    vector<P> res;
    for (char c : s) {
        if (res.size() > 0 && res.back().first == c)
            res.back().second++;
        else
            res.emplace_back(c, 1);
    }
    return res;
}

bool solve() {
    string s;
    cin >> s;
    auto a = rle(s);
    if (a.size() > 3) return false;
    rep(i, a.size()) {
        if (i == 0) {
            if (a[i].first != 'A') return false;
        } else if (i == 1) {
            if (a[i].first != 'B') return false;
        } else {
            if (a[i].first != 'C') return false;
        }
    }
    return true;
}

int main() {
    cout << (solve() ? "Yes" : "No") << endl;
    return 0;
}
/***************thinking***************/
/*

*/