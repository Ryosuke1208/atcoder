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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    deque<int> deq;
    rep(i, n) {
        int s;
        cin >> s;
        deq.push_back(s);
    }
    rep(i, q) {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
            swap(deq[--x], deq[--y]);
        else if (t == 2) {
            int tmp = deq.back();
            deq.pop_back();
            deq.push_front(tmp);
        } else
            cout << deq[--x] << endl;
    }

    return 0;
}

/***************thinking***************/
/*

*/