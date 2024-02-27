#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(int t){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=m;j++) 
		    scanf("%d", &a[i][j]);
    printf("Test %d:\n", t);
    int max=0, maxhang, maxcot;
    for (int i=1;i<=n;i++){
        int sum=0;
        for (int j=1;j<=m;j++)
            sum+=a[i][j];
        if (sum>max){
        	maxhang=i;
        	max=sum;
		}
	}
	max=0;
	for (int i=1;i<=m;i++){
        int sum=0;
        for (int j=1;j<=n;j++)
            if (j!=maxhang) sum+=a[j][i];
        if (sum>max){
        	maxcot=i;
        	max=sum;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++)
		    if (i!=maxhang && j!=maxcot) 
		        printf("%d ", a[i][j]);
	    printf("\n");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++) solve(i);
}
