#include <stdio.h>
#include <string.h>

int main() {
    char ch[20];
    int k,monthNumber;
    scanf("%s %d", ch, &k);

    char *T[12] = {"January", "February", "March", "April", "May", "June",
                   "July", "August", "September", "October", "November", "December"};

    for(int i=0;i<12;i++)
    {
        if(strcmp(T[i],ch)==0)
        {
            monthNumber=i;
            break;
        }
    }
    int n=(monthNumber+k)%12;
    for(int i=0;i<12;i++)
    {
        if(n==i)
        {
             printf("%s",T[i]);
             return 0;
        }
    }
    return 0;
}
