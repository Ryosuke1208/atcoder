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
    vector<int> a(n + 1);
    int first = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == -1) first = i;
    }

    vector<int> order;
    order.push_back(first);

    for (int i = 1; i <= n; i++) {
        if (a[i] == -1) continue;
        auto it1 = find(order.begin(), order.end(), a[i]);
        auto it2 = find(order.begin(), order.end(), i);
        if (it1 != order.end() && it2 != order.end()) continue;

        if (it1 == order.end() && it2 == order.end()) {
            order.push_back(a[i]);
            order.push_back(i);
        } else if (it1 != order.end()) {
            order.insert(it1 + 1, i);
        } else if (it2 != order.end()) {
            order.insert(it2, a[i]);
        }
    }

    rep(i, order.size()) cout << order[i] << " ";
    return 0;
}

/***************thinking***************/
/*

*/