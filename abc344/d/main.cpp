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
const int INF = 1e9 + 7;
vector<string> bag[105];
int dp[105][105];

int main() {
    string T;
    cin >> T;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        for (int j = 0; j < A; j++) {
            string S;
            cin >> S;
            bag[i].push_back(S);
        }
    }

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++) dp[i][j] = INF;

    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= T.size(); j++) {
            if (dp[i][j] == INF) continue;
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            for (string S : bag[i]) {
                if (j + S.size() > T.size()) continue;
                if (T.substr(j, S.size()) == S)
                    dp[i + 1][j + S.size()] =
                        min(dp[i + 1][j + S.size()], dp[i][j] + 1);
            }
        }
    }

    int ans = INF;
    for (int i = 0; i <= N; i++) ans = min(ans, dp[i][T.size()]);

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}

/***************thinking***************/
/*

*/