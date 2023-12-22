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
    string s;
    getline(std::cin, s);
    int n = s.size();
    int idx = 0;
    while (idx < n) {
        if (s[idx] != ' ') {
            cout << s[idx];
            idx++;
        } else {
            while (s[idx] == ' ') idx++;
            cout << ',';
        }
    }
    cout << endl;
    return 0;
}
/***************thinking***************/
/*

*/