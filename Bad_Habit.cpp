#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) pref[i + 1] = pref[i] + 1;
        else pref[i + 1] = pref[i] - 2;
    }

    long long mn = LLONG_MAX;
    bool ok = false;
    for (int i = k; i <= n; i++) {
        mn = min(mn, pref[i - k]); // min prefix jusqu’à i-k
        if (pref[i] - mn >= 0) {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";
}
