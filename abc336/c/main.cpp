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
    ll n;
    cin >> n, n--;
    vector<int> ans;
    string c = "02468";
    while (n) {
        ans.push_back(n % 5);
        n /= 5;
    }
    if (ans.empty()) ans.push_back(0);
    reverse(all(ans));
    rep(i, ans.size()) { cout << c[ans[i]]; }
    cout << endl;
    return 0;
}
/***************thinking***************/
/*

*/