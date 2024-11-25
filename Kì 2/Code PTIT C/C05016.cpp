#include <stdio.h>

int main(){
    int a[101][101], n, d, h1, h2, c1, c2, t;
    scanf("%d", &n);
    d = 0;
    h1 = 1;
    h2 = n;
    c1 = 1;
    c2 = n;
    while ((h1 <= h2) && (c1 <= c2)){
        for (int i = c1; i <= c2; i++)
            a[h1][i] = ++d;
        h1++;
        for (int i = h1; i <= h2; i++)
            a[i][c2] = ++d;
        c2--;
        if (h1 <= h2)
            for (int i = c2; i >= c1; i--)
               a[h2][i] = ++d;
        h2--;
        if (c1 <= c2)
            for (int i = h2; i >= h1; i--)
            a[i][c1] = ++d;
        c1++;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
   }
   return 0;
}

