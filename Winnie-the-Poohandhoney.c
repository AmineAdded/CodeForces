#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    fscanf(inputFile,"%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        fscanf(inputFile,"%d",&a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        while(count<3 && a[i]>=k)
        {
            a[i]-=k;
            count++;
        }
        ans+=a[i];
    }
    fprintf(outputFile,"%d\n",ans);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
