#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	char s[105];
	gets(s);
	char t[100];
	scanf("%s", &t);
	char *token=strtok(s, " ");
	int dem=0;
	char luu[105][105];
	while (token!=NULL){
		if (strcmp(token, t)!=0)strcpy(luu[++dem], token);
		token=strtok(NULL, " ");
	}
	for (int i=1;i<=dem;i++){
		printf("%s", luu[i]);
		if (i!=dem) printf(" ");
	}
}
int main(){
	solve();
}
