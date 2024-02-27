#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	char s[205];
	gets(s);
	char *token=strtok(s, " ");
	int dem=0;
	while (token!=NULL){
		dem++;
		token=strtok(NULL, " ");
	}
	printf("%d", dem);
}
int main(){
	int t;
	scanf("%d", &t);getchar();
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
