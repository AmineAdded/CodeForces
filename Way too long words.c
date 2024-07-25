#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid(char *ch) {
    int n = 0;
    char *ptr = ch;
    while ((*ptr != '\0') && (*ptr >= 'a') && (*ptr <= 'z')) {
        n++;
        ptr++;
    }
    if (n == strlen(ch))
        return 1;
    else
        return 0;
}

int main() {
    int n;
    char *T[100];

    do {
        printf("Enter the number of words: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++) {
        T[i] = (char *)malloc(sizeof(char)*100);
        do {
            printf("Enter word %d: ", i + 1);
            scanf("%s", T[i]);
        } while (strlen(T[i]) < 1 || strlen(T[i]) > 100 || valid(T[i]) == 0);
    }

    for (int i = 0; i < n; i++) {
        if(strlen(T[i])>10)
        {
            char *ch;
            ch=T[i];
            printf("%c%d%c\n",ch[0],strlen(ch)-2,ch[strlen(ch)-1]);
        }
        else
            printf("%s\n", T[i]);
        free(T[i]);
    }

    return 0;
}
