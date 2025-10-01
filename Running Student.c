#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int OptimalStop(long long int xu,long long int yu,long long int T[],long long int n,long long int vb,long long int vs)
{
    int min;
    double TimeBus,TimeStudent,TotalTime,MinTime=1e18,DistanceBus,DistanceStudent,TimeBus1,TimeStudent1,DistanceBus1,DistanceStudent1;
    if(xu<=0)
        return 2;
    min=1;
    for(int i=2;i<=n;i++)
    {
        //Now
        DistanceBus=T[i];
        DistanceStudent=sqrt(pow((double)(xu - T[i]), 2) + pow((double)yu, 2));
        TimeBus=(double)DistanceBus/vb;
        TimeStudent=(double)DistanceStudent/vs;
        TotalTime=TimeBus+TimeStudent;
        if(TotalTime<MinTime || (TotalTime==MinTime && llabs(xu-T[i]) < llabs(xu-T[min])))
        {
              min=i;
              MinTime=TotalTime;
        }
    }
    return min;

}
int main()
{
    long long int n,vb,vs,xu,yu;
    long long int T[100];
    int indexe;
    scanf("%lld %lld %lld",&n,&vb,&vs);

    for(long long int i=1;i<=n;i++)
        scanf("%lld",&T[i]);

    scanf("%lld %lld",&xu,&yu);
    indexe=OptimalStop(xu,yu,T,n,vb,vs);
    printf("%d",indexe);

}
