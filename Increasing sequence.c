#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solve() {
    int n;
    long long int d, *a;
    scanf("%d %lld", &n, &d);
    a = malloc(sizeof(long long int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] <= a[i]) {
            long long int required = a[i] - a[i + 1] + 1;
            long long int moves = (long long int)ceil((double)required / d);
            count += moves;
            a[i + 1] += moves * d;
        }
    }

    printf("%lld\n", count);
    free(a);
}

int main() {
    solve();
    return 0;
}
