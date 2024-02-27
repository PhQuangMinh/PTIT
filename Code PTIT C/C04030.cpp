#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(int t){
	int n;
	scanf("%d", &n);
	int a[n+5], b[n+5];
	for (int i=0;i<n;i++) scanf("%d", &a[i]);
	for (int i=0;i<n;i++) scanf("%d", &b[i]);
	printf("Test %d:\n", t);
	for (int i=0;i<n-1;i++)
	    for (int j=i+1;j<n;j++)
	        if (a[i]>a[j]){
	        	int t=a[i];a[i]=a[j];a[j]=t;
			}
	for (int i=0;i<n-1;i++)
	    for (int j=i+1;j<n;j++)
	        if (b[i]<b[j]){
	        	int t=b[i];b[i]=b[j];b[j]=t;
			}
	int da=0, db=0;
	for (int i=0;i<n*2;i++)
	    if (i%2==0){
	    	printf("%d ", a[da]);da++;
		}
		else{
			printf("%d ", b[db]);db++;
		}
	printf("\n");
}
int main(){
    int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++)
	    solve(i);
}
