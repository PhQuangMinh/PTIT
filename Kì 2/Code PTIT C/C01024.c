#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void solve(){
	int n;
	scanf("%d", &n);
	int dau=n%10;
	while (n>=10) n/=10;
	if (n!=dau)	printf("NO\n");
	else printf("YES\n");
}
int main(){
	int t, i;
	scanf("%d",&t);
	for (i=1;i<=t;i++) solve();
}
