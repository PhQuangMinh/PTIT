#include<stdio.h>
#include<string.h>
void solve(){
	char s[20];
	scanf("%s", &s);
	int i;
	for (i=0;i<strlen(s)-1;i++)
	    if (s[i]-'0'>s[i+1]-'0'){
	    	printf("NO\n");return;
		}
	printf("YES\n");
}
int main(){
	int t;
	scanf("%d", &t);
	int i;
	for (i=1;i<=t;i++) solve();
}
