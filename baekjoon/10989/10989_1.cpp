//2021 SEORII®. All right reserved.
//Code created on 2021-07-22

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n;
    int a[10001] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++a[x];
    }
    for (int i = 1; i < 10001; ++i) {
        for (int j = 0; j < a[i]; ++j) cout << i << '\n';
    }
    return 0;
}