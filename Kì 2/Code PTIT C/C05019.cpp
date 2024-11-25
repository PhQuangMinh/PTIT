#include<stdio.h>
#include<math.h>
int sang[100000];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	for (int i=2;i<=sqrt(1000);i++)
	    if (sang[i]==0)
	        for (int j=i*i;j<=1000;j+=i) 
	           sang[j]=1;
}
void solve(int t){
    int a[101][101], n, d, h1, h2, c1, c2;
    scanf("%d", &n);
    d = 0;
    h1 = 1;
    h2 = n;
    c1 = 1;
    c2 = n;
    printf("Test %d:\n", t);
    while ((h1 <= h2) && (c1 <= c2)){
        for (int i = c1; i <= c2; i++){
        	while (sang[d]) d++;
            a[h1][i] = d;
            d++;
        }
        h1++;
        for (int i = h1; i <= h2; i++){
        	while (sang[d]) d++;
            a[i][c2] = d;
            d++;
        }
        c2--;
        while (sang[d]) d++;
        if (h1 <= h2)
            for (int i = c2; i >= c1; i--){
            	while (sang[d]) d++;
               a[h2][i] = d;
               d++;
            }
        h2--;
        while (sang[d]) d++;
        if (c1 <= c2)
            for (int i = h2; i >= h1; i--){
            	while (sang[d]) d++;
                a[i][c1] = d;
                d++;
            }
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
	sangnt();
	scanf("%d", &t);
	for (int i=1;i<=t;i++) solve(i);
}

