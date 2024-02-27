#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void solve(){
	char s[105];
	scanf("%s", &s);
	int i, j, n=strlen(s), d=1;
	for (i=1;i<n;i++){
	    if (s[i]==s[i-1]) d++;
	    else{
	    	printf("%c%d", s[i-1], d);
	    	d=1;
		}
	}
	printf("%c%d\n", s[n-1], d);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}
