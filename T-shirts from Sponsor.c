#include <string.h>
#include <stdio.h>

typedef struct {
    int number;
    char nom[10];
} Size;

int main() {
    int N1, N2, N3, N4, N5, k;
    scanf("%d %d %d %d %d", &N1, &N2, &N3, &N4, &N5);

    Size liste[5] = {{N1, "S"}, {N2, "M"}, {N3, "L"}, {N4, "XL"}, {N5, "XXL"}};

    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        char size[10];
        scanf("%s", size);

        int indice = -1;
        for (int j = 0; j < 5; j++) {
            if (strcmp(size, liste[j].nom) == 0) {
                indice = j;
                break;
            }
        }

        if (indice != -1) {
            if (liste[indice].number > 0) {
                printf("%s\n", liste[indice].nom);
                liste[indice].number--;
            } else {
                int left = indice - 1, right = indice + 1;
                while (left >= 0 || right < 5) {
                    if (right < 5 && liste[right].number > 0) {
                        printf("%s\n", liste[right].nom);
                        liste[right].number--;
                        break;
                    }
                    if (left >= 0 && liste[left].number > 0) {
                        printf("%s\n", liste[left].nom);
                        liste[left].number--;
                        break;
                    }
                    right++;
                    left--;
                }
            }
        }
    }

    return 0;
}
