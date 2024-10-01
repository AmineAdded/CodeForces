#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, ans = 0;
    int Small = INT_MAX;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        ans += a;

        if (a % 2 != 0) {
            Small = min(Small, a);
        }
    }

    if (ans % 2 != 0) {
        cout << ans << endl;
    } else {
        // Si la somme est paire et qu'on a trouvé un impair, on enlève le plus petit impair
        if (Small == INT_MAX) {
            cout << 0 << endl;
        } else {
            cout << ans - Small << endl;
        }
    }

    return 0;
}
