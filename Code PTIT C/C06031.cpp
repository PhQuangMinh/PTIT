#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s", &s);
	char t[100];
	int d=0;
	for (int i=97;i<=122;i++)
	    t[d++]=(char)i;
	int f[105][105]={0};
	int ns=strlen(s);
	int nt=26;
	f[0][0]=0;
	for (int i=0;i<ns;i++)
	    for (int j=0;j<nt;j++){
	    	if (s[i]==t[j])
	    	    f[i+1][j+1]=f[i][j]+1;
	    	else{
			    if (f[i+1][j]>=f[i][j+1]) f[i+1][j+1]=f[i+1][j];
	    	    else f[i+1][j+1]=f[i][j+1];
	    	}
	    }
	printf("%d", 26-f[ns][nt]);
}
