#include<stdio.h>
#include<math.h>
#include<string.h>
int check(char s[]){
	for (int i=0;i<strlen(s);i++)
	    if (s[i]!='0' && s[i]!='1' && s[i]!='2') return 0;
	return 1;
}
void solve(){
	char s[200];
	getchar();gets(s);
	if (check(s)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}
