#include<stdio.h>
#include<math.h>
void solve(int t){
    int a[101][101], n, d, h1, h2, c1, c2;
    scanf("%d", &n);
    d = n*n;
    h1 = 1;
    h2 = n;
    c1 = 1;
    c2 = n;
    printf("Test %d:\n", t);
    while ((h1 <= h2) && (c1 <= c2)){
        for (int i = c1; i <= c2; i++)
            a[h1][i] = d--;
        h1++;
        for (int i = h1; i <= h2; i++)
            a[i][c2] = d--;
        c2--;
        if (h1 <= h2)
            for (int i = c2; i >= c1; i--)
               a[h2][i] = d--;
        h2--;
        if (c1 <= c2)
            for (int i = h2; i >= h1; i--)
                a[i][c1] = d--;
        c1++;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
   }
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++) solve(i);
}

