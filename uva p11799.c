#include <stdio.h>
int main()
{
    int i,j,t,n,m,a[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int max = -1;
        scanf("%d",&m);
        for(j=1; j<=m; j++)
        {   
             scanf("%d",&a[j]);

             if (a[j]>max)
                max=a[j];

        }
        printf("Case %d: %d\n",i,max);
    }

    return 0;
}