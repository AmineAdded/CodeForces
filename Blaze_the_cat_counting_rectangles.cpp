#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long ans = 1LL * n * (n - 1) / 2 * m * (m - 1) / 2;
    cout << ans << endl;
}
