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
    int K, G, M, g = 0, m = 0;
    cin >> K >> G >> M;
    while (K) {
        if (g == G)
            g = 0;
        else if (m == 0)
            m = M;
        else {
            if (G - g <= m) {
                m -= (G - g);
                g = G;
            } else {
                g += m;
                m = 0;
            }
        }
        K--;
    }
    cout << g << " " << m << endl;
    return 0;
}

/***************thinking***************/
/*

*/