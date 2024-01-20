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
    for (int i = 1; i <= n - 1; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i + j >= n) break;
            if (s[j] != s[i + j])
                cnt++;
            else
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}
/***************thinking***************/
/*

*/