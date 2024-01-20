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
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T& a, T b) {
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
    string t;
    for (char c : s) {
        t += c;
        if (t.size() >= 3 && t.substr(t.size() - 3) == "ABC") {
            t.pop_back();
            t.pop_back();
            t.pop_back();
        }
    }
    cout << t << endl;
    return 0;
}

/***************thinking***************/
/*

*/