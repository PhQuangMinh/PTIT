#include<stdio.h>
#include<string.h>
int check(char s[]){
	int d=0;
	int n=strlen(s);
	for (int i=0;i<n/2;i++)
	    if (s[i]!=s[n-i-1]) d++;
    if (d>=2) return 0;
    if (d==1) return 1;
    if (d==0){
    	if (n%2==0) return 0;
    	return 1;
	}
}
void solve(){
	char s[40];
	gets(s);
	if (check(s)) printf("YES");
	else printf("NO");
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
//3
//abccaa
//abbcca
//abcda
