//2021 SEORII®. All right reserved.
//Code created on 2022-01-11

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int s = i, j = i;
        while (j) {
            s += j % 10;
            j /= 10;
        }
        if (s == n) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}