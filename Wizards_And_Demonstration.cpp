#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long needed = (y * n + 99) / 100;
    long long ans = max(0LL, needed - x);

    cout << ans << endl;
    return 0;
}
