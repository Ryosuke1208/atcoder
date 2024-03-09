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
    int N, Q;
    std::cin >> N;

    std::list<int> A;
    std::unordered_map<int, std::list<int>::iterator> pos;

    for (int i = 0; i < N; ++i) {
        int x;
        std::cin >> x;
        A.push_back(x);
        pos[x] = --A.end();
    }

    std::cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int type;
        std::cin >> type;
        if (type == 1) {
            int x, y;
            std::cin >> x >> y;
            auto it = pos[x];
            ++it;
            A.insert(it, y);
            pos[y] = --it;
        } else if (type == 2) {
            int x;
            std::cin >> x;
            A.erase(pos[x]);
            pos.erase(x);
        }
    }

    for (const auto &x : A) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

/***************thinking***************/
/*

*/