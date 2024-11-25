#include<stdio.h>
#include<string.h>
int check(char a[100][100], int n){
	char chung[200];
	strcpy(chung, a[1]);
	strcat(chung, a[1]);
	for (int i=1;i<=n;i++)
	    if (strstr(chung, a[i])==NULL) return 0;
	return 1;
}
char xoay[100][100];
int dem=0;
void xoayxau(char s[]){
	int len=strlen(s);
	for (int i=0;i<len;i++){
		char tmp=s[0];
		for (int j=1;j<len;j++)
		    s[j-1]=s[j];
		s[len-1]=tmp;
		strcpy(xoay[++dem], s);
	}
}
int count(char s[], char t[]){
	int dem=0;
	int len=strlen(s);
	while (strcmp(s, t)!=0){
		dem++;
		char tmp=t[0];
		for (int j=1;j<len;j++)
		    t[j-1]=t[j];
		t[len-1]=tmp;
	}
	return dem;
}
int solve(int n,char a[100][100]){
	int res=10000;
	for (int i=1;i<=dem;i++){
		int dem=0;
		for (int j=1;j<=n;j++){
			char tmp[300];
			strcpy(tmp, a[j]);
		    dem+=count(xoay[i], tmp);
		}
		if (dem<res) res=dem;
	}
	return res; 
}
int main(){
	int n;
	scanf("%d", &n);
	char a[100][100];
	for (int i=1;i<=n;i++)
	    scanf("%s", &a[i]);
	if (check(a, n)==0){
		printf("-1");
		return 0;
	}
	char s[300];
	strcpy(s, a[1]);
	xoayxau(s);
	printf("%d", solve(n, a));
}
//4
//xzzwo
//zwoxz
//zzwox
//xzzwo
