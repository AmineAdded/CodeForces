#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
    char *s, *t;
    int count=0;
    s=malloc(sizeof(char)*102);
    t=malloc(sizeof(char)*102);
    scanf("%s %s", s, t);
    if(strlen(s)>strlen(t) || strlen(t)>strlen(s))
    {
        printf("NO\n");
        return 0;
    }
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!=t[strlen(t)-i-1])
            break;
        count++;
    }
    if(count==strlen(s))
        printf("YES\n");
    else
        printf("NO\n");
    free(s);
    free(t);

    return 0;
}
