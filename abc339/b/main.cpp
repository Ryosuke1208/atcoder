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
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<char>> grid(H, vector<char>(W, '.'));

    int i = 0, j = 0; 
    int direction = 0;  

    // 各操作をシミュレート
    for (int k = 0; k < N; ++k) {
        // 現在のマスの色を切り替える
        if (grid[i][j] == '.') {
            grid[i][j] = '#';  // 白から黒に変更

            direction = (direction + 1) % 4;
            switch (direction) {
                case 0:  // 上
                    i = (i - 1 + H) % H;
                    break;
                case 1:  // 右
                    j = (j + 1) % W;
                    break;
                case 2:  // 下
                    i = (i + 1) % H;
                    break;
                case 3:  // 左
                    j = (j - 1 + W) % W;
                    break;
            }
        } else {
            grid[i][j] = '.';
            direction = (direction + 3) % 4;
            switch (direction) {
                case 0: 
                    i = (i - 1 + H) % H;
                    break;
                case 1: 
                    j = (j + 1) % W;
                    break;
                case 2: 
                    i = (i + 1) % H;
                    break;
                case 3: 
                    j = (j - 1 + W) % W;
                    break;
            }
        }
    }

    // グリッドの状態を出力
    for (int row = 0; row < H; ++row) {
        for (int col = 0; col < W; ++col) {
            cout << grid[row][col];
        }
        cout << endl;
    }

    return 0;
}

/***************thinking***************/
/*

*/