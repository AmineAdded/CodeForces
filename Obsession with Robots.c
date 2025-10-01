#include <stdio.h>
#include <string.h>

int main() {
    char grid[400][400] = {0};
    int x = 200, y = 200;
    grid[x][y] = 1;
    char s[101];
    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++) {
        grid[x + 1][y]++;
        grid[x - 1][y]++;
        grid[x][y + 1]++;
        grid[x][y - 1]++;

        if (s[i] == 'R') y++;
        else if (s[i] == 'L') y--;
        else if (s[i] == 'U') x--;
        else if (s[i] == 'D') x++;

        if (grid[x][y] > 1)
        {
            printf("BUG\n");
            return 0;
        }
    }

    printf("OK\n");
    return 0;
}
