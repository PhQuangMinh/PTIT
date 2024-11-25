#include<stdio.h>
#include<string.h>
void chuanhoa(char s[]){
	for (int i=0;i<strlen(s);i++)
	    if (s[i]>='A' && s[i]<='Z') 
		    s[i]=(char)((int)s[i]+32);
	printf("%s@ptit.edu.vn", s);
}
int main(){
	char s[100];
	gets(s);
	char *token=strtok(s, " ");
	char a[100][100];
	int n=0;
	while (token!=NULL){
		n++;
		strcpy(a[n], token);
		token=strtok(NULL, " ");
	}
	for (int i=1;i<n;i++){
	    if (a[i][0]>='A' && a[i][0]<='Z'){
		    a[i][0]=(char)((int)a[i][0]+32);
	    }
	    printf("%c", a[i][0]);
	}
	chuanhoa(a[n]);
}
