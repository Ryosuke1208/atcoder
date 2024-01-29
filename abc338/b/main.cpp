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
    string s;
    cin >> s;
    map<char, int> ma;
    rep(i, s.size()) { ma[s[i]]++; }
    int a = -1;
    for (auto m : ma) {
        a = max(a, m.second);
    }
    vector<char> c;
    for (auto m : ma) {
        if (m.second == a) {
            c.push_back(m.first);
        }
    }
    cout << c[0] << endl;
    return 0;
}

/***************thinking***************/
/*

*/