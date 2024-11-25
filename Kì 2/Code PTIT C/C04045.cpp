#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int x, demc=0, deml=0;
	char s[100000];
	gets(s);
	int n=strlen(s);
	s[n]=' ';
	int dem=0;
	for (int i=0;i<n;i++)
	    if (s[i]!=' ' && s[i+1]==' '){
	    	int k=s[i]-'0';
	    	if (k%2==0) demc++;
	    	else deml++;
	    	dem++;
		}
	if (dem%2==0 && demc>deml || dem%2==1 && demc<deml) printf("YES\n");
	else printf("NO\n");
}
int main(){
    int t;
	scanf("%d", &t);getchar();
	while (t--) solve();
}
//2
//11 22 33 44 55 66 77
//23 34 45 56 67 78 89 90 121 131 141 151 161 171

