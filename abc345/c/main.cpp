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
ll c2(ll n) { return n * (n - 1) / 2; }

int main() {
    string s;
    cin >> s;
    int n = s.size();
    // ここで初期状態と同じ文字列になる選び方の個数を数えている
    ll same = 0;
    map<char, int> ma;
    for (auto c : s) ma[c]++;
    for (auto p : ma) {
        int m = p.second;
        same += c2(m);
    }

    ll diff = c2(n) - same;
    ll ans = diff;
    // 初期状態を最初にカウントしているわけではないので、初期状態を同じ
    // ものを作れる時は＋１している　ここが難しい
    if (same) ans++;
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/