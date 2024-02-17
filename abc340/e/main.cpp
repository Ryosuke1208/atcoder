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
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M), C(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    for (int i = 0; i < M; i++) {
        int balls = A[B[i]];
        A[B[i]] = 0;
        int j = B[i];
        C[j] += balls;
        C[(j + balls) % N] -= balls;
    }

    for (int i = 1; i < N; i++) {
        C[i] += C[i - 1];
    }

    for (int i = 0; i < N; i++) {
        A[i] += C[i];
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

/***************thinking***************/
/*

*/