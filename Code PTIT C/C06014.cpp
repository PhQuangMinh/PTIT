#include<stdio.h>
#include<string.h>
void chuanhoa(char s[]){
	if (s[0]>='a' && s[0]<='z') s[0]=(char)((int)s[0]-32);
	for (int i=1;i<strlen(s);i++)
	    if (s[i]>='A' && s[i]<='Z') s[i]=(char)((int)s[i]+32);
	printf("%s", s);
}
void solve(char s[]){
	char *token=strtok(s, " ");
	while (token!=NULL){
		chuanhoa(token);
		token=strtok(NULL, " ");
		if (token!=NULL) printf(" ");
    }
}
int main(){
	int n;
	scanf("%d", &n);
	getchar();
	char s[1005];
	for (int i=1;i<=n;i++){
		gets(s);
	    solve(s);
	    if (i!=n) printf("\n");
	}
}
