#include<stdio.h>
#include<math.h>
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	int dem=0;
	for (int i=1;i<=n;i++){
		scanf("%d", &a[i]);
		if (snt(a[i])) dem++;
	}
	printf("%d ", dem);
	for (int i=1;i<=n;i++) {
		if (snt(a[i])) printf("%d ", a[i]);
	}
}

