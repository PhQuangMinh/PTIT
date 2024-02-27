#include<stdio.h>
#include<math.h>
#include<string.h>
int tcs(int n){
	int sum=0;
	while (n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int tcsnt(int n){
	int sum=0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
		    while (n%i==0){
			    sum+=tcs(i);
			    n/=i;
		    }
		}
	}
	if (n>1) sum+=tcs(n);
	return sum;
}
int check(int n){
	if (tcs(n)==tcsnt(n)) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	if (check(n)) printf("YES");
	else printf("NO");
}
