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
int main() {
    string n;
    cin >> n;
    sort(all(n));
    int ans = -inf;
    do {
        for (int i = 1; i < n.size(); i++) {
            string s1 = "", s2 = "";
            for (int j = 0; j < i; j++) s1 += n[j];
            for (int j = i; j < n.size(); j++) s2 += n[j];
            if (s1[0] == '0' || s2[0] == '0') continue;
            ans = max(ans, stoi(s1) * stoi(s2));
        }
    } while (next_permutation(all(n)));
    cout << ans << endl;
    return 0;
}

/***************thinking***************/
/*

*/