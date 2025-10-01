#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int l;
    int r;
} Period;

int main() {
    int n, p1, p2, p3, t1, t2;
    scanf("%d %d %d %d %d %d", &n, &p1, &p2, &p3, &t1, &t2);

    Period *p = (Period *)malloc(sizeof(Period) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i].l, &p[i].r);
    }

    int totalPower = 0;

    for (int i = 0; i < n; i++) {
        totalPower += (p[i].r - p[i].l) * p1;

        if (i < n - 1) {
            int idleTime = p[i + 1].l - p[i].r;

            if (idleTime <= t1) {
                totalPower += idleTime * p1;
            } else if (idleTime <= t1 + t2) {
                totalPower += t1 * p1 + (idleTime - t1) * p2;
            } else {
                totalPower += t1 * p1 + t2 * p2 + (idleTime - t1 - t2) * p3;
            }
        }
    }

    printf("%d\n", totalPower);
    free(p);
    return 0;
}
