#include <stdio.h>
#include <math.h>
int main()
{
    long long a,n,b;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        if(n==0)
        break;
        a=sqrt(n);
        b=a*a;
        if(b==n)
        printf("yes\n");
        else
        printf("no\n");
    }
    return(0);
}
