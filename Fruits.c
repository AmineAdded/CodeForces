#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nom;
    int occ;
} Occurence;

void TriPrix(int *T, int m) {
    int Temp;
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (T[i] >= T[j]) {
                Temp = T[i];
                T[i] = T[j];
                T[j] = Temp;
            }
        }
    }
}

void TriOcc(Occurence *occ, int a) {
    Occurence temp;
    for (int i = 0; i < a - 1; i++) {
        for (int j = i + 1; j < a; j++) {
            if (occ[i].occ <= occ[j].occ) {
                temp = occ[i];
                occ[i] = occ[j];
                occ[j] = temp;
            }
        }
    }
}

int found(char *s, Occurence *occ, int n) {
    for (int i = 0; i < n; i++) {
        if (strcmp(s, occ[i].nom) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *prix = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &prix[i]);
    }

    char fruits[m][100];
    for (int i = 0; i < m; i++) {
        scanf("%s", fruits[i]);
    }

    Occurence *occ = malloc(sizeof(Occurence) * m);
    int a = 0;

    for (int i = 0; i < m; i++) {
        int pos = found(fruits[i], occ, a);
        if (pos == -1) {
            occ[a].nom = malloc(strlen(fruits[i]) + 1);
            strcpy(occ[a].nom, fruits[i]);
            occ[a].occ = 1;
            a++;
        } else {
            occ[pos].occ++;
        }
    }

    TriPrix(prix, n);
    TriOcc(occ, a);

    int i = 0, minSum = 0, maxSum = 0;
    while (i < a) {
        minSum += prix[i] * occ[i].occ;
        maxSum += prix[n - i - 1] * occ[i].occ;
        i++;
    }

    printf("%d %d\n", minSum, maxSum);

    free(prix);
    for (int i = 0; i < a; i++) {
        free(occ[i].nom);
    }
    free(occ);

    return 0;
}
