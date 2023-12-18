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
    int N;
    cin >> N;

    vector<pair<int, int>> Q(N);
    for (int i = 0; i < N; ++i) {
        cin >> Q[i].first >> Q[i].second;
    }

    unordered_map<int, int> req;
    int crr = 0;
    int ans = 0;
    vector<int> choice;

    for (int i = N - 1; i >= 0; --i) {
        int t = Q[i].first;
        int x = Q[i].second;

        if (t == 1) {
            if (req[x]) {
                req[x]--;
                crr--;
                choice.push_back(1);
            } else {
                choice.push_back(0);
            }
        } else if (t == 2) {
            req[x]++;
            crr++;
            ans = max(ans, crr);
        }
    }

    int total = 0;
    for (const auto& r : req) {
        total += r.second;
    }

    if (total == 0) {
        cout << ans << endl;
        for (auto it = choice.rbegin(); it != choice.rend(); ++it) {
            cout << *it << " ";
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}

/***************thinking***************/
/*

*/