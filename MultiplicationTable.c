#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Échanger les caractères aux positions start et end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Déplacer les indices
        start++;
        end--;
    }
}
int main()
{
    int grid[10][10],k;
    scanf("%d",&k);
    for (int i = 0; i < k; i++) {
        grid[i][0] = i + 1;
        grid[0][i] = i + 1;
    }

     for (int i = 1; i < k-1; i++) 
    {
        for (int j = 1; j < k-1; j++) 
        {
            int mul=grid[i][0] * grid[0][j],index=0;
            char ans[100];
           if (mul == 0) {
                ans[index++] = '0';
            } else {
                while (mul > 0) {
                    ans[index++] = (mul % k) + '0';
                    mul /= k;
                }
            }
            ans[index] = '\0';
            reverseString(ans);
            grid[i][j] =atoi(ans);
        }
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=0;j<k-1;j++)
        {
            printf("%2d  ",grid[i][j]);
        }
       printf("\n");
    }
}