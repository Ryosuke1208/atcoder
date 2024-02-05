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
std::string extractSuffix(const std::string &s) {
    size_t lastDot = s.find_last_of('.');
    if (lastDot != std::string::npos) {
        return s.substr(lastDot + 1);
    } else {
        return s;  // '.'が見つからない場合はそのまま返す
    }
}

int main() {
    string s;
    cin >> s;

    cout << extractSuffix(s) << endl;

    return 0;
}

/***************thinking***************/
/*

*/