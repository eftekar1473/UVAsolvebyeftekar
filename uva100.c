#include <stdio.h>

int main() {
    int a, b;

    while (scanf("%d%d", &a, &b) != EOF) {
        int max=0;
       printf("%d %d ",a,b);
        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        int i;
        for (i = a; i <= b; i++) {
            int cycle = 1;
            int n = i;

            while (n != 1) {
                if (n % 2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
                cycle++;
            }

            if (max < cycle)
                max = cycle;
        }

        printf("%d\n", max);
    }

    return 0;
}
