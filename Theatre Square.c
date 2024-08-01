#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
    long long int n,m,a,stones,length,width;
    scanf("%lld %lld %lld",&n,&m,&a);
    length= (int)ceil((double)n / a) *a;
    width= (int)ceil((double)m / a) *a;
    //a*a=Surface of a flagstones
    //length*width= Total surface of the covered area
    stones=(length*width)/(a*a);
    printf("%lld",stones);

}
