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
    int N;
    cin >> N;

    vector<string> grid(N);

    pair<int, int> player1, player2;

    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
        for (int j = 0; j < N; ++j) {
            if (grid[i][j] == 'P') {
                if (player1.first == 0) {
                    player1 = {i, j};
                } else {
                    player2 = {i, j};
                }
            }
        }
    }

    // 上下左右の移動
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    // 幅優先探索
    queue<tuple<int, int, int, int, int>> q;  // x1, y1, x2, y2
    q.push({player1.first, player1.second, player2.first, player2.second, 0});

    while (!q.empty()) {
        auto [x1, y1, x2, y2, dist] = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx1 = x1 + dx[i];
            int ny1 = y1 + dy[i];
            int nx2 = x2 + dx[i];
            int ny2 = y2 + dy[i];

            bool valid_move = (nx1 >= 0 && nx1 < N && ny1 >= 0 && ny1 < N &&
                               grid[nx1][ny1] == '.') &&
                              (nx2 >= 0 && nx2 < N && ny2 >= 0 && ny2 < N &&
                               grid[nx2][ny2] == '.');

            if (valid_move) {
                if (make_pair(nx1, ny1) == make_pair(nx2, ny2)) {
                    // プレイヤー1とプレイヤー2が同じマスに到達
                    cout << dist + 1 << endl;
                    return 0;
                }

                grid[x1][y1] = grid[x2][y2] =
                    '.';  // プレイヤー1とプレイヤー2を移動
                q.push({nx1, ny1, nx2, ny2, dist + 1});
            }
        }
    }

    // プレイヤー1とプレイヤー2が同じマスに到達できなかった場合
    cout << -1 << endl;

    return 0;
}

/***************thinking***************/
/*

*/