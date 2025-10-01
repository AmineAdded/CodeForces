#include<stdio.h>
#include<stdlib.h>
int PGCD(int x,int y)
{
    int *T1=malloc(sizeof(int)*x),a=0,*T2=malloc(sizeof(int)*x+y),b=0,res;
    for(int i=1;i<=(x/2)+1;i++)
    {
        if(x%i==0)
            T1[a++]=i;
    }
    for(int i=1;i<=(y/2)+1;i++)
    {
        if(y%i==0)
        {
            for(int j=0;j<a;j++)
            {
                if(i==T1[j])
                    T2[b++]=i;
            }
        }
    }
    res=T2[b-1];
    free(T1);
    free(T2);
    return res;
}
int Sum_Digits(int num,int base)
{

    int s=0;
    while(num!=0)
    {
        s+=num%base;
        num/=base;
    }
    return s;
}
int main()
{
    int A,s=0,count=0,P;
    scanf("%d",&A);
    for(int i=2;i<A;i++)
    {
        s+=Sum_Digits(A,i);
        count++;
    }
    P=PGCD(s,count);
    s/=P;
    count/=P;
    printf("%d/%d",s,count);
}
