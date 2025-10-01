#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fic1=fopen("input.txt","r");
    FILE *fic2=fopen("output.txt","w");
    int n,T[100],j=0;
    char s[101];
    fscanf(fic1,"%d",&n);
    fscanf(fic1,"%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            T[j++]=i+1;
    }
    int diff=T[1]-T[0],a=1;
    for(;a<j-1;a++)
    {
        if(T[a+1]-T[a]!=diff)
        {
            fprintf(fic2,"NO\n");
            fclose(fic1);
            fclose(fic2);
            return 0;
        }
    }
    fprintf(fic2,"YES\n");
    fclose(fic1);
    fclose(fic2);
    return 0;

    

}