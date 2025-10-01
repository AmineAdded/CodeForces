#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int left = a[0], right = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] + 1 == left) {
            left = a[i];
        } else if (a[i] - 1 == right) {
            right = a[i];
        } else {
            printf("NO\n");
            return;
        }
    }

    printf("YES\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}
