#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grid[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            scanf(" %c",&grid[i][j]);
    }
    int valid=1,i=0;
    while(valid && i<3)
    {
        int j=0;
        while(valid && j<3)
        {
            if(grid[i][j]=='X')
            {
                int symX=2-i;
                int symY=2-j;
                if(grid[symX][symY]!='X')
                {
                    valid=0;
                    break;
                }
            }
            j++;
        }
        i++;
    }

    if(valid)
        printf("YES");
    else
        printf("NO");
    return 0;
}
