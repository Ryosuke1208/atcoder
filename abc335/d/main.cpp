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
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    int num = 1;
    for (int i = 0; i < n / 2; ++i) {
        for (int j = i; j < n - i; ++j) grid[i][j] = num++;
        for (int j = i + 1; j < n - i; ++j) grid[j][n - i - 1] = num++;
        for (int j = n - i - 2; j >= i; --j) grid[n - i - 1][j] = num++;
        for (int j = n - i - 2; j > i; --j) grid[j][i] = num++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j != 0) cout << " ";
            if (i == (n - 1) / 2 && j == (n - 1) / 2) {
                cout << "T";
                continue;
            }
            cout << grid[i][j];
        }
        cout << endl;
    }
    return 0;
}

/***************thinking***************/
/*

*/