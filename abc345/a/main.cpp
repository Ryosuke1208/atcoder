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
bool solve(string s) {
    int n = s.size();
    if (s[0] != '<') return false;
    if (s[n - 1] != '>') return false;
    for (int i = 1; i < n - 1; i++)
        if (s[i] != '=') return false;
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << (solve(s) ? "Yes" : "No") << endl;
    return 0;
}

/***************thinking***************/
/*

*/