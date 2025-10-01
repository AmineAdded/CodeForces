#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char grid[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&grid[i][j]);
        }
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='W')
            {
                if(i<n-1 && grid[i+1][j]=='P')
                {
                    ans++;
                    grid[i+1][j]='.';
                }
                else if(i>0 && grid[i-1][j]=='P')
                {
                    ans++;
                    grid[i-1][j]='.';
                }
                else if(j<m-1 && grid[i][j+1]=='P')
                {
                    ans++;
                    grid[i][j+1]='.';
                }
                else if(j>0 && grid[i][j-1]=='P')
                {
                    ans++;
                    grid[i][j-1]='.';
                }
            }
        }
    }

    printf("%d",ans);
}