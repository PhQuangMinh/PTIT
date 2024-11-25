#include<stdio.h>
#include<string.h>
int check(char s[]){
	if (s[0]<s[1] && s[1]<s[2] && s[2]<s[4] && s[4]<s[5]) return 1;
	if (s[0]==s[1] && s[1]==s[2] && s[2]==s[4] && s[4]==s[5]) return 1;
	if (s[0]==s[1] && s[1]==s[2] && s[4]==s[5]) return 1;
	for (int i=0;i<strlen(s);i++)
	    if (i!=3 && s[i]!='6' && s[i]!='8') return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	char s[10], t[10];
	for (int i=1;i<=n;i++){
		scanf("%s", &s);
		scanf("%s", &t);
		if (check(t)) printf("YES\n");
		else printf("NO\n");
	}
}
