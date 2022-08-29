//
// Created by 이서현 on 2022/08/29.
//
#include<bits/stdc++.h>

using namespace std;

void f(int tc) {
    int n, k;
    cin >> n >> k;
    vector<int> chk(102);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        chk[x]++;
    }
    if (n > k * 2) {
        cout << "Case #" << tc << ": NO\n";
        return;
    }
    for (auto &i: chk) {
        if (i > 2) {
            cout << "Case #" << tc << ": NO\n";
            return;
        }
    }
    cout << "Case #" << tc << ": YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) f(i);
}
