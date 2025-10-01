#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    long long int n, j, i = 0, posj;
    int xM0, yM0, xMi, yMi, xMl, yMl, rest, length_cycle = 0;

    scanf("%lld %lld %d %d", &n, &j, &xM0, &yM0);

    Point TabA[n];
    for (int i = 0; i < n; i++)
        scanf("%d %d", &TabA[i].x, &TabA[i].y);

    xMl = xM0;
    yMl = yM0;

    // Trouver le cycle
    do {
        rest = i % n;
        xMi = 2 * TabA[rest].x - xMl;
        yMi = 2 * TabA[rest].y - yMl;
        i++;
        xMl = xMi;
        yMl = yMi;
        length_cycle++;
    } while (i != j && !(xMl == xM0 && yMl == yM0));

    if (i == j) {
        printf("%d %d\n", xMl, yMl);
        return 0;
    }

    // Calcul correct de la position dans le cycle
    posj = j % length_cycle;

    // Réinitialiser les valeurs pour recalculer à partir de M0
    xMl = xM0;
    yMl = yM0;

    for (i = 0; i < posj; i++) {
        rest = i % n;
        xMi = 2 * TabA[rest].x - xMl;
        yMi = 2 * TabA[rest].y - yMl;
        xMl = xMi;
        yMl = yMi;
    }

    printf("%d %d\n", xMl, yMl);

    return 0;
}
