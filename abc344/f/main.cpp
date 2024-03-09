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

// using P = pair<int, int>;
//  using mint = modint998244353;
/********************************************/

/********************code********************/

const int MAX_N = 80;
const ll INF = 1e18;
ll dp[MAX_N + 1][MAX_N + 1][MAX_N * MAX_N + 1];
ll P[MAX_N + 1][MAX_N + 1], R[MAX_N + 1][MAX_N + 1], D[MAX_N + 1][MAX_N + 1];

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> P[i][j] >> R[i][j] >> D[i][j];
        }
    }

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= N * N; k++) {
                dp[i][j][k] = INF;
            }
        }
    }

    dp[1][1][0] = 0;
    for (int k = 0; k < N * N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dp[i][j][k] == INF) continue;
                if (i < N && dp[i][j][k] >= D[i][j])
                    dp[i + 1][j][k + 1] =
                        min(dp[i + 1][j][k + 1], dp[i][j][k] - D[i][j]);
                if (j < N && dp[i][j][k] >= R[i][j])
                    dp[i][j + 1][k + 1] =
                        min(dp[i][j + 1][k + 1], dp[i][j][k] - R[i][j]);
                dp[i][j][k + 1] = min(dp[i][j][k + 1], dp[i][j][k] + P[i][j]);
            }
        }
    }

    for (int k = 0; k <= N * N; k++) {
        if (dp[N][N][k] != INF) {
            cout << k << endl;
            break;
        }
    }

    return 0;
}

/***************thinking***************/
/*

*/