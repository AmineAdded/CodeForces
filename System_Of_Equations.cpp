#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int res = 0;

    // a*a+b=n donc b=n-a*a et b>=0 donc n-a*a>=0 donc a*a<=n
    for (int a = 0; a * a <= n; a++) {
        // b ne peut pas dépasser sqrt(m), sinon b^2 > m et a serait négatif
        for (int b = 0; b * b <= m; b++) {
            if (a * a + b == n && a + b * b == m) {
                res++;
            }
        }
    }

    cout << res << endl;
    return 0;
}
