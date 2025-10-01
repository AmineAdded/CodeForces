#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grid[8][8];
    int row=0,col=0;
    for(int i=0;i<8;i++)
    {
        scanf("%s",grid[i]);
        int all_black=1;
        for(int j=0;j<8;j++)
        {
            if(grid[i][j]!='B')
            {
                all_black=0;
                break;
            }
        }
        if(all_black)
            row++;
    }

    for(int i=0;i<8;i++)
    {
        int all_black=1;
        for(int j=0;j<8;j++)
        {
            if(grid[j][i]!='B')
            {
                all_black=0;
                break;
            }
        }
        if(all_black)
            col++;
    }

    if(col+row==16)
        printf("8");
    else
        printf("%d",row+col);

}
