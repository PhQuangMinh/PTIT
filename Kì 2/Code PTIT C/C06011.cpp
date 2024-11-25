#include<stdio.h>
#include<math.h>
#include<string.h>
int tn(char s[]){
	int n=strlen(s);
	for (int i=0;i<n;i++)
	    if (s[i]!=s[n-i-1]) return 0;
	return 1;
}
int check(char s[]){
	int n=strlen(s);
	if (s[0]!='8' || s[n-1]!='8') return 0;
	int sum=0;
	for (int i=0;i<n;i++){
		int k=s[i]-'0';
		sum+=k;
	}
	if (tn(s) && sum%10==0) return 1;
	return 0;
}
void solve(){
	char s[505];
	scanf("%s", &s);
	if (check(s)) printf("YES");
	else printf("NO");
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
