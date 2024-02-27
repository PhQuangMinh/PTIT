#include<stdio.h>
#include<math.h>
int f[20];
void fibonaci(){
	f[0]=1;
	f[1]=1;
	for (int i=2;i<=15;i++)
	    f[i]=f[i-1]+f[i-2];
}
int tcs(int x){
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
int check(int x){
	if (!snt(x)) return 0;
	for (int i=0;i<=15;i++)
	    if (tcs(x)==f[i]) return 1;
	return 0;
}
int main(){
	fibonaci();
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b){
		int t=a;a=b;b=t;
	}
	for (int i=a;i<=b;i++)
	    if (check(i)) printf("%d ", i);
}
