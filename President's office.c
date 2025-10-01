#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    char c;
    scanf("%d %d", &n, &m);
    scanf(" %c", &c);
    char room[n][m];
    int seen[256] = {0};
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %c", &room[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (room[i][j] == c) {
                if (i > 0 && room[i-1][j] != c && room[i-1][j] != '.' && seen[(int)room[i-1][j]] == 0) {
                    seen[(int)room[i-1][j]] = 1;
                    count++;
                }
                if (i < n-1 && room[i+1][j] != c && room[i+1][j] != '.' && seen[(int)room[i+1][j]] == 0) {
                    seen[(int)room[i+1][j]] = 1;
                    count++;
                }
                if (j > 0 && room[i][j-1] != c && room[i][j-1] != '.' && seen[(int)room[i][j-1]] == 0) {
                    seen[(int)room[i][j-1]] = 1;
                    count++;
                }
                if (j < m-1 && room[i][j+1] != c && room[i][j+1] != '.' && seen[(int)room[i][j+1]] == 0) {
                    seen[(int)room[i][j+1]] = 1;
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
