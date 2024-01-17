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
    int n, m;
    cin >> n >> m;
    vector<string> c;
    rep(i, n) {
        string s;
        cin >> s;
        c.push_back(s);
    }
    map<string, int> ma;
    vector<string> plate;
    vector<int> cost;
    rep(i, m) {
        string s;
        cin >> s;
        plate.push_back(s);
    }
    rep(i, m + 1) {
        int p;
        cin >> p;
        cost.push_back(p);
    }
    rep(i, m) { ma[plate[i]] = cost[i + 1]; }
    int ans = 0;
    for (string s : c) {
        if (ma[s])
            ans += ma[s];
        else
            ans += cost[0];
    }
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/