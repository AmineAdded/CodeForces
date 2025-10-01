#include <stdio.h>

#define N 100010

int T, n, m, a[N];

int main() {
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &n, &m);
        int mx = 0;

        // Lecture des valeurs dans le tableau et trouver le maximum
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
            if (a[i] > mx) {
                mx = a[i];
            }
        }

        char op;
        int l, r;

        // Traitement des opérations
        while (m--) {
            scanf(" %c %d %d", &op, &l, &r);
            if (l <= mx && mx <= r) {
                if (op == '+') {
                    mx += 1;
                } else if (op == '-') {
                    mx -= 1;
                }
            }
            printf("%d ", mx);
        }

        // Nouvelle ligne après chaque cas de test
        printf("\n");
    }

    return 0;
}
