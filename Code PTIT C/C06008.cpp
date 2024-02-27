#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	char s[105];
	gets(s);
	char *token=strtok(s, " ");
	int dem=0;
	char t[105][100];
	while (token!=NULL){
		int ok=1;
		for (int i=1;i<=dem;i++)
		    if (strcmp(t[i], token)==0){
		    	ok=0;
		    	break;
			}
		if (ok){
			dem++;
		    strcpy(t[dem], token);
		}
		token=strtok(NULL, " ");
	}
	for (int i=1;i<=dem;i++){
		printf("%s", t[i]);
		if (i!=dem) printf(" ");
	}
}
int main(){
	solve();
}
