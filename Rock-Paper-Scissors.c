#include <stdio.h>
#include <string.h>

int main() {
    char f[10], m[10], s[10];
    scanf("%s %s %s", f, m, s);

    if ((strcmp(f, "rock") == 0 && strcmp(m, "scissors") == 0 && strcmp(s, "scissors") == 0) ||
        (strcmp(f, "scissors") == 0 && strcmp(m, "paper") == 0 && strcmp(s, "paper") == 0) ||
        (strcmp(f, "paper") == 0 && strcmp(m, "rock") == 0 && strcmp(s, "rock") == 0)) {
        printf("F\n");
    }
    else if ((strcmp(m, "rock") == 0 && strcmp(f, "scissors") == 0 && strcmp(s, "scissors") == 0) ||
             (strcmp(m, "scissors") == 0 && strcmp(f, "paper") == 0 && strcmp(s, "paper") == 0) ||
             (strcmp(m, "paper") == 0 && strcmp(f, "rock") == 0 && strcmp(s, "rock") == 0)) {
        printf("M\n");
    }
    else if ((strcmp(s, "rock") == 0 && strcmp(f, "scissors") == 0 && strcmp(m, "scissors") == 0) ||
             (strcmp(s, "scissors") == 0 && strcmp(f, "paper") == 0 && strcmp(m, "paper") == 0) ||
             (strcmp(s, "paper") == 0 && strcmp(f, "rock") == 0 && strcmp(m, "rock") == 0)) {
        printf("S\n");
    }
    else {
        printf("?\n");
    }

    return 0;
}
