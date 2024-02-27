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
	for (int i=0;i<n;i++){
		int k=s[i]-'0';
		if (k!=2 && k!=3 && k!=5 && k!=7) return 0;
	}
	if (tn(s)) return 1;
	return 0;
}
void solve(){
	char s[505];
	scanf("%s", &s);
	if (check(s)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}
