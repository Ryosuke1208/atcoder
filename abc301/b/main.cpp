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
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> ans;
    rep(i, n - 1) {
        if (abs(a[i] - a[i + 1]) == 1) {
            ans.push_back(a[i]);
        } else {
            if (a[i] > a[i + 1]) {
                for (int j = a[i]; j > a[i + 1]; j--) ans.push_back(j);
            } else {
                for (int j = a[i]; j < a[i + 1]; j++) ans.push_back(j);
            }
        }
    }
    fore(r, ans) cout << r << " ";
    cout << a.back() << endl;
    return 0;
}

/***************thinking***************/
/*

*/