#include<stdio.h>
#include<math.h>
#include<string.h>
int dem(int x){
	int dem=0;
	while (x%2==0){
		dem++;
		x/=2;
	}
	return dem;
}
int tong(int n){
	int d=0;
	for (int i=2;i<=n;i++) 
	    d+=dem(i);
	return d;
}
int main(){
	int n, k;
	scanf("%d%d", &n, &k);
	if (tong(n)>=k) printf("Yes");
	else printf("No");
}
