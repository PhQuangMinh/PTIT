#include<stdio.h>
#include<string.h>
void solve(){
	char s[1005], t[1005];
	gets(s);
	gets(t);
	char a[100][100], b[100][100];
	char *token=strtok(s, " ");
	int da=0, db=0;
	while (token!=NULL){
		strcpy(a[++da], token);
		token=strtok(NULL, " ");
	}
	token=strtok(t, " ");
	while (token!=NULL){
		strcpy(b[++db], token);
		token=strtok(NULL, " ");
	}
	int check[100]={};
	for (int i=1;i<=da;i++)
	    for (int j=1;j<=db;j++)
	        if (strcmp(a[i], b[j])==0) check[i]=1;
	char c[100][100];
	int dc=0;
	for (int i=1;i<=da;i++)
	    if (check[i]==0) strcpy(c[++dc], a[i]);
	for (int i=1;i<dc;i++)
	    for (int j=i+1;j<=dc;j++)
	        if (strcmp(c[i], c[j])>0){
	        	char t[100];
	        	strcpy(t, c[i]);
	        	strcpy(c[i], c[j]);
	        	strcpy(c[j], t);
			}
	printf("%s ", c[1]);
	for (int i=2;i<=dc;i++){
		if (strcmp(c[i], c[i-1])!=0)
		    printf("%s ", c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
//2
//abc ab ab ab abcd
//ab abc
//aaa xyz ab zzz abc dd dd abc
//xyz dd ttt sas cdc
