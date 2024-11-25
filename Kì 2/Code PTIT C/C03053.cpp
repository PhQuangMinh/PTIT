#include<stdio.h>
#include<math.h>
#include<string.h>
int sang[10005];
void sangnt(){
	sang[1]=1;
	int i, j;
	for(i=2;i<=sqrt(10000);i++){
		for(j=2;j<=10000/i;j++) sang[j*i]=1;
	}
}
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=2;i<=n/2;i++)
	    if (sang[i]==0 && sang[n-i]==0) 
		    printf("%d %d ", i, n-i);
}
int main(){
	int n;
	scanf("%d", &n);
	sangnt();
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}
