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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n + 1, 0);
    rep(i, n) {
        cin >> a[i];
        if (a[i] <= n) {
            b[a[i]]++;
        }
    }
    set<int> st;
    rep(i, n + 1) if (b[i] == 0) st.insert(i);
    while (q) {
        q--;
        int i, x;
        cin >> i >> x;
        i--;
        if (a[i] <= n) {
            b[a[i]]--;
            if (b[a[i]] == 0) st.insert(a[i]);
        }
        a[i] = x;
        if (a[i] <= n) {
            if (b[a[i]] == 0) st.erase(a[i]);
            b[a[i]]++;
        }
        cout << (*st.begin()) << endl;
    }
    return 0;
}
/***************thinking***************/
/*

*/