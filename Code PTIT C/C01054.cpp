#include<stdio.h>
#include<math.h>
int sang[2000000];
void sangnt(){
	sang[1]=1;
	sang[0]=1;
	int i, j;
	for(i=2;i<=sqrt(2000000);i++){
		for(j=2;j<=2000000/i;j++) sang[j*i]=1;
	}
}
int sum(int n){
	int sum=0;
	if (sang[n]==0) return sum+n;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
		    while (n%i==0){
			    sum+=i;
			    n/=i;
			}
		}
		if (sang[n]==0) return sum+n;
	}
	return sum;
}
int main(){
	int n, i;
	sangnt();
	scanf("%d", &n);
	int a[n+5];
	long long tong=0;
	for (int i=1;i<=n;i++){
		int x;
		scanf("%d", &x);
		tong+=sum(x);
	}
	printf("%lld", tong);
}
