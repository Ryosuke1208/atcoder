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
int maxSubsequenceLength(const vector<int> &A, int D) {
    int N = A.size();
    vector<int> dp(N, 1);

    for (int i = 1; i < N; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (abs(A[i] - A[j]) <= D) {
                dp[i] = max(dp[i], dp[j] + 1);
                break;
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = maxSubsequenceLength(A, D);
    cout << result << endl;

    return 0;
}

/***************thinking***************/
/*

*/