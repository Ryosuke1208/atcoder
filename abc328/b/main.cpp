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
bool is_zorome(int month, int day) {
    // 月と日を文字列に変換し、ユニークな数字のセットを作成
    std::set<char> unique_digits;
    std::string month_str = std::to_string(month);
    std::string day_str = std::to_string(day);
    for (char digit : month_str) {
        unique_digits.insert(digit);
    }
    for (char digit : day_str) {
        unique_digits.insert(digit);
    }
    // セットの要素数が1ならゾロ目とみなす
    return unique_digits.size() == 1;
}

int count_zorome_days(int N, const std::vector<int> &D) {
    int zorome_count = 0;
    for (int month = 1; month <= N; ++month) {
        for (int day = 1; day <= D[month - 1]; ++day) {
            if (is_zorome(month, day)) {
                zorome_count++;
            }
        }
    }
    return zorome_count;
}

int main() {
    // 入力例
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d[i];

    // 結果の出力
    int result = count_zorome_days(n, d);
    std::cout << result << std::endl;

    return 0;
}

/***************thinking***************/
/*

*/