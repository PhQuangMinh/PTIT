#include<stdio.h>
#include<string.h>
int main(){
	char s[10000];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	    if (s[i]>='A' && s[i]<='Z') 
	        s[i]=(char)((int)s[i]+32);
	char a[100][100];
	int n=0;
	char *token=strtok(s, " ");
	while (token!=NULL){
		n++;
		strcpy(a[n], token);
		token=strtok(NULL, " ");
	}
//	printf("%d\n", n);
	int d[100]={};
	for (int i=1;i<n;i++){
		int dem=1;
		if (d[i]==0){
		    for (int j=i+1;j<=n;j++)
		        if (strcmp(a[i], a[j])==0 && d[j]==0){
		       	    dem++;
		       	    d[j]=1;
			    }
			printf("%s %d\n", a[i], dem);
			d[i]=1;
	    }
	}
}
