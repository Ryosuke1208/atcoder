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
    int n, k;
    cin >> n >> k;
    int d = 0;
    while (1) {
        k *= 2;
        d++;
        if (2 * n <= k) break;
    }
    cout << d << endl;
    queue<int> know, no;
    for (int i = 1; i <= k; i++) know.push(i);
    for (int i = k + 1; i <= 2 * n; i++) no.push(i);
    while (know.size() < 2 * n) {
        queue<int> nknow, nno;
        if (know.size() <= no.size()) {
            while (!know.empty()) {
                cout << know.front() << " " << no.front() << " ";
                nknow.push(know.front());
                nknow.push(no.front());
                know.pop();
                no.pop();
            }
            while (!no.empty()) {
                cout << no.front() << " ";
                nno.push(no.front());
                no.pop();
            }
            cout << endl;
            know = nknow;
            no = nno;
        } else {
            while (!no.empty()) {
                cout << know.front() << " " << no.front() << " ";
                nknow.push(know.front());
                nknow.push(no.front());
                know.pop();
                no.pop();
            }
            while (!know.empty()) {
                cout << know.front() << " ";
                nknow.push(know.front());
                know.pop();
            }
            cout << endl;
            know = nknow;
        }
    }
    return 0;
}

/***************thinking***************/
/*

*/