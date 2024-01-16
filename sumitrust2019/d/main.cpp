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
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < 1000; i++) {
        string num = to_string(i);
        if (num.size() < 3) num = string(3 - num.size(), '0') + num;
        int idx = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == num[idx]) idx++;
            if (idx == 3) {
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
/***************thinking***************/
/*

*/