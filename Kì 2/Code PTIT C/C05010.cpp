#include<stdio.h>
#include<string.h>
#include<math.h>
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
int main(){
	int n, m;
	scanf("%d", &n);
	int a[n+5][n+5];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=n;j++)
		    scanf("%d", &a[i][j]);
	int sum=0;	    
	for (int i=1;i<=n;i++){
	    for (int j=1;j<=n;j++)
	        if (snt(a[i][j]) && j>=i){
	            sum+=a[i][j];
	        }
	}
	printf("%d", sum);	      
}
