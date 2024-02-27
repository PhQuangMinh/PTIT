#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(int t){
	int n;
	scanf("%d", &n);
	int a[n+5];
	scanf("%d", &a[1]);
	int d=1;
	int max=0;
	for (int i=2;i<=n;i++){
	    scanf("%d", &a[i]);
	    if (a[i]>a[i-1]) d++;
	    else{
	    	if (d>max) max=d;
	    	d=1;
		}
	}
	if (d>max) max=d;
	printf("Test %d:\n", t);
	printf("%d\n", max);
	d=1;
	for (int i=2;i<=n;i++){
	    if (a[i]>a[i-1]) d++;
	    else{
	    	if (d==max){
			   for (int j=i-max;j<=i-1;j++) printf("%d ", a[j]);
			   printf("\n");
		    }
	    	d=1;
		}
	}
	if (d==max)
	    for (int j=n-max+1;j<=n;j++) printf("%d ", a[j]);
	printf("\n");
}
int main(){
    int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++)
	    solve(i);
}
