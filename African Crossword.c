#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k, m, n, p;
    char s[105][105]; // tableau pour stocker les chaînes

    // Lecture des valeurs de n et m
    scanf("%d %d", &n, &m);

    // Lecture des chaînes
    for (j = 0; j < n; j++) {
        scanf("%s", s[j]);
    }

    // Parcours des lignes et des colonnes
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            p = 0;
            // Vérification des colonnes
            for (k = 0; k < n; k++) {
                if (s[i][j] == s[k][j]) {
                    p++;
                }
            }
            // Vérification des lignes
            for (k = 0; k < m; k++) {
                if (s[i][j] == s[i][k]) {
                    p++;
                }
            }
            // Si le caractère n'est pas répété, l'afficher
            if (p < 3) {
                printf("%c", s[i][j]);
            }
        }
    }

    return 0;
}
