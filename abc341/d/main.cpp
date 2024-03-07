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

ll count_numbers(long long x, ll n, ll m, ll _lcm) {
    return x / n + x / m - 2 * (x / _lcm);
}

ll find_kth_number(ll n, ll m, ll k) {
    ll _lcm = lcm(n, m);
    long long low = 1, high = (long long)k * max(n, m);

    while (low < high) {
        long long mid = (low + high) / 2;
        if (count_numbers(mid, n, m, _lcm) < k) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll result = find_kth_number(n, m, k);
    cout << result << endl;

    return 0;
}

/***************thinking***************/
/*

*/