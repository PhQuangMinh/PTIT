#include<stdio.h>
#include<math.h>
#include<string.h>
int check(char s[]){
	int n=strlen(s);
	for (int i=1;i<n-1;i++)
	    if (s[i]!=s[n-i-1]) return 0;
	if (s[0]-'0'==2*(s[n-1]-'0') || s[n-1]-'0'==2*(s[0]-'0')) return 1;
	return 0;
}
void solve(){
	char s[20];
	scanf("%s", &s);
	if (check(s)) printf("YES");
	else printf("NO");
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}
