#include<stdio.h>
#include<string.h>
int check(char s[], char t[]){
	for (int i=0;i<strlen(s);i++)
	    if (s[i]>='A' && s[i]<='Z') 
		    s[i]=(char)((int)s[i]+32);
	for (int i=0;i<strlen(t);i++)
	    if (t[i]>='A' && t[i]<='Z') 
		    t[i]=(char)((int)t[i]+32);
	if (strcmp(s, t)==0) return 0;
	return 1;
}
void solve(int d){
	char s[300], t[30];
	gets(s);
	scanf("%s", &t);getchar();
	int n=0;
	char *token=strtok(s, " ");
	char a[200][100];
	while (token!=NULL){
		strcpy(a[++n], token);
		token=strtok(NULL, " ");
	}
	printf("Test %d: ", d);
	for (int i=1;i<=n;i++){
		char k[300];
		strcpy(k, a[i]);
	    if (check(k, t)){
		    printf("%s ", a[i]);
	    }
    }
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for (int i=1;i<=t;i++){
	    solve(i);
	    if (i!=t) printf("\n");
	}
}
//2
//Abc ddd abdc aaa bbb abc ddD XY
//aBc
//ACHDNC XXXX YYYY ABC ABC XXXX
//XxXx
