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
    string s, t;
    cin >> s >> t;
    int a[26] = {0}, b[26] = {0};
    int a_at = 0, b_at = 0;
    rep(i, s.size()) {
        if (s[i] == '@')
            a_at++;
        else
            a[s[i] - 'a']++;

        if (t[i] == '@')
            b_at++;
        else
            b[t[i] - 'a']++;
    }
    string atcoder = "atcoder";
    bool ok = true;
    rep(i, 26) {
        if (atcoder.find(i + 'a') != string::npos) {
            if (a[i] > b[i])
                b_at -= (a[i] - b[i]);
            else
                a_at -= (b[i] - a[i]);
        } else {
            if (a[i] != b[i]) ok = false;
        }
    }

    if (a_at < 0 || b_at < 0) ok = false;

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}

/***************thinking***************/
/*

*/