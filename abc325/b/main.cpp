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
    vector<int> a(m + 1);
    vector<int> scores(n + 1, 0);
    vector<int> no[n + 1];
    for (int i = 1; i <= m; i++) cin >> a[i];
    int ma = -1;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; j++) {
            if (s[j - 1] == 'o')
                scores[i] += a[j];
            else
                no[i].push_back(a[j]);
        }
        scores[i] += i;
        sort(all(no[i]));
        reverse(all(no[i]));
        ma = max(ma, scores[i]);
    }
    for (int i = 1; i <= n; i++) {
        int ans = 0;
        if (scores[i] < ma) {
            int idx = 0;
            while (scores[i] < ma) {
                scores[i] += no[i][idx];
                idx++;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
/***************thinking***************/
/*

*/