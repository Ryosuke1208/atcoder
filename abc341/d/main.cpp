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
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b) { return a * b / gcd(a, b); }

ll count_numbers(long long x, ll N, ll M, ll LCM) {
    return x / N + x / M - 2 * (x / LCM);
}

ll find_kth_number(ll N, ll M, ll K) {
    ll LCM = lcm(N, M);
    long long low = 1, high = (long long)K * max(N, M);

    while (low < high) {
        long long mid = (low + high) / 2;
        if (count_numbers(mid, N, M, LCM) < K) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    ll N, M, K;
    cin >> N >> M >> K;

    ll result = find_kth_number(N, M, K);
    cout << result << endl;

    return 0;
}

/***************thinking***************/
/*

*/