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
class UnionFind {
   private:
    int n;
    vector<int> par;

   public:
    UnionFind(int _n) {
        n = _n;
        par.resize(n, -1);
    }

    int leader(int x) {
        if (par[x] < 0)
            return x;
        else
            return par[x] = leader(par[x]);
    }
    // グループの作成
    void merge(int x, int y) {
        x = leader(x);
        y = leader(y);
        if (x != y) {
            if (-par[x] < -par[y]) swap(x, y);
            par[x] += par[y];
            par[y] = x;
        }
    }
    // 同じグループかどうか
    bool same(int x, int y) { return leader(x) == leader(y); }
    // xの属する連結成分のサイズを取得
    int size(int x) { return -par[leader(x)]; }
    // 連結成分の取得
    vector<vector<int>> groups() {
        vector<vector<int>> member(n);
        for (int i = 0; i < n; ++i) member[leader(i)].push_back(i);
        vector<vector<int>> result;
        for (int i = 0; i < n; ++i) {
            if (!member[i].empty()) result.push_back(member[i]);
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    UnionFind uf(n + 1);
    rep(i, n) {
        int u, v;
        cin >> u >> v;
        if (u != 1) uf.merge(u, v);
    }
    int ms = 0;
    for (int i = 2; i <= n; i++) ms = max(ms, uf.size(i));
    cout << n - ms << endl;
    return 0;
}

/***************thinking***************/
/*

*/