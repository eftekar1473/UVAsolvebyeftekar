#include <stdio.h>
int main() {
    int x,y,t,n,m;
    while(scanf("%d",&t)!=EOF&&t!=0)
    {
        scanf("%d%d",&m,&n);
        while(t--)
        {
            scanf("%d%d",&x,&y);
            if(x==m||y==n)  
            printf("divisa\n");
            else if (x>m && y>n)   printf("NE\n");
            else if (x>m && y<n)   printf("SE\n");
            else if (x<m && y>n)   printf("NO\n");
            else if (x<m && y<n)   printf("SO\n");
        }
    }
    return 0;
}