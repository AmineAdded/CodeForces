#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int found(char c, char *s1) {
    int i = 0;
    while (i < strlen(s1)) {
        if (s1[i] == c)
            return i;
        i++;
    }
    return -1;
}

void supprimer(int indice, char *s1, int *n) {
    for (int i = indice; i < (*n) - 1; i++)
        s1[i] = s1[i + 1];
    s1[(*n) - 1] = '\0';
    (*n)--;
}

void solve(char *s1, char *s2) {
    int n = strlen(s1), i = 0, j = 0;
    char *ch = malloc(sizeof(char) * 201);

    while (s2[i] != '\0') {
        if (s2[i] == ' ') {
            ch[j++] = ' ';
        } else {
            int indice = found(s2[i], s1);
            if (indice != -1) {
                ch[j++] = s2[i];
                supprimer(indice, s1, &n);
            } else {
                printf("NO\n");
                free(ch);
                return;
            }
        }
        i++;
    }

    ch[j] = '\0';
    if(strcmp(ch,s2)==0)
        printf("YES\n");
    free(ch);
}

int main() {
    char *s1, *s2;
    s1 = malloc(sizeof(char) * 201);
    s2 = malloc(sizeof(char) * 201);
    gets(s1);
    gets(s2);
    solve(s1, s2);
    free(s1);
    free(s2);
    return 0;
}
