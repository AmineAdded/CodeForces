#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k, m, n, p;
    char s[105][105]; // tableau pour stocker les cha�nes

    // Lecture des valeurs de n et m
    scanf("%d %d", &n, &m);

    // Lecture des cha�nes
    for (j = 0; j < n; j++) {
        scanf("%s", s[j]);
    }

    // Parcours des lignes et des colonnes
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            p = 0;
            // V�rification des colonnes
            for (k = 0; k < n; k++) {
                if (s[i][j] == s[k][j]) {
                    p++;
                }
            }
            // V�rification des lignes
            for (k = 0; k < m; k++) {
                if (s[i][j] == s[i][k]) {
                    p++;
                }
            }
            // Si le caract�re n'est pas r�p�t�, l'afficher
            if (p < 3) {
                printf("%c", s[i][j]);
            }
        }
    }

    return 0;
}
