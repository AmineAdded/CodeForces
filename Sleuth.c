#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char ch[101];
    gets(ch);
    int i = strlen(ch) - 1;
    while (i >= 0 )
    {
        if (tolower(ch[i]) >= 'a' && tolower(ch[i]) <= 'z')
        {
            if (tolower(ch[i]) == 'a' || tolower(ch[i]) == 'e' || tolower(ch[i]) == 'o' || tolower(ch[i]) == 'y' || tolower(ch[i]) == 'u' || tolower(ch[i]) == 'i')
            {
                printf("YES");
                return 0;
            }
            else
            {
                printf("NO");
                return 0;
            }
        }
        i--;
    }
    return 0;
}
