#include <stdio.h>
int main() {
    int i,T,a,b,c;
    scanf ("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if ((b<a&&a<c)||(c<a&&a<b)) 
        printf ("Case %d: %d\n",i,a);
        else  if ((a<b&&b<c)||(c<b&&b<a)) 
        printf ("Case %d: %d\n",i,b);
        else   if ((b<c&&c<a)||(a<c&&c<b)) 
         printf ("Case %d: %d\n",i,c);
    }
    return 0;
}