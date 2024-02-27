#include<stdio.h>
#include<string.h>
int a[100][100];
int hang=0, cot=0;
int check(int n){
	for (int i=0;i<n;i++)
	    for (int j=0;j<n;j++)
	        if (a[i][j]==1) return 0;
	return 1;
}
void tim(int n){
	for (int i=0;i<n;i++)
	    for (int j=0;j<n;j++)
	        if (a[i][j]==1){
	        	hang=i;
	        	cot=j;
			}
}
void solve(int n){
	for (int i=0;i<=hang;i++)
	    for (int j=0;j<=cot;j++)
	        if (a[i][j]==1) a[i][j]=0;
	        else a[i][j]=1;
}
int main(){
	int n;
	scanf("%d", &n);
	getchar();
	char s[100];
	for (int i=0;i<n;i++){
		gets(s);
		for (int j=0;j<n;j++)
		    a[i][j]=s[j]-'0';
	}
	int res=0;
	while (check(n)==0){
		res++;
		tim(n);
		solve(n);
	}
	printf("%d", res);
}
//3
//001
//111
//111
