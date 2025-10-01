#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grid[20][20]; 
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= n*2; i++) {
        for (int j = 0; j <= n*2; j++) {
            grid[i][j] = ' ';
        }
    }
    int begin = 0, finish = n * 2;
    for (int i = n; i >= 0; i--)
    {
        int number=0;
        int start = begin, end = finish;
        while(end>=start)
        {
            grid[i][start]=number+'0';
            grid[i][end]=number+'0';
            number++;
            start++;
            end--;
        }
        begin++;
        finish--;
        
    }


    begin = 1, finish = n * 2 -1;
    for (int i = n+1; i <= n * 2; i++)
    {
        int number=0;
        int start = begin, end = finish;
        while(end>=start)
        {
            grid[i][start]=number+'0';
            grid[i][end]=number+'0';
            number++;
            start++;
            end--;
        }
        begin++;
        finish--;
    }

    for (int i = 0; i <=n*2 ; i++)
    {
        for (int j = 0; j <= n * 2; j++)
        {
            printf("%c ", grid[i][j]); 
        }
        printf("\n");
    }
}
