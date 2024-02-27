#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int doi(char c){
	if (c=='I') return 1;
	if (c=='V') return 5;
	if (c=='X') return 10;
	if (c=='L') return 50;
	if (c=='C') return 100;
	if (c=='D') return 500;
	if (c=='M') return 1000;
}
void solve(){
	char s[100005];
	scanf("%s", &s);
	long long sum=0;
	int i=0, n=strlen(s);
	for (i=0;i<n;i++){
	    sum=sum+doi(s[i]);
	    if (s[i]=='I')
	        if (s[i+1]=='V' || s[i+1]=='X') sum-=2;
	    if (s[i]=='X')
	        if (s[i+1]=='L' || s[i+1]=='C') sum-=20;
	    if (s[i]=='C')
	        if (s[i+1]=='D' || s[i+1]=='M') sum-=200;
	}
	printf("%lld", sum);
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) printf("\n");
	}
}
