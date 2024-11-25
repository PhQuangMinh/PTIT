#include<stdio.h>
#include<string.h>
int check(char s[]){
	int d[20]={0};
	for (int i=0;i<strlen(s);i++){
		if (s[i]<'0' || s[i]>'9' || s[0]=='0') return -1;
        if (s[i]>='0' && s[i]<='9') d[s[i]-'0'] ++;
    }
	for (int i=0;i<=9;i++) 
		if (d[i]==0) return 0;
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	char s[1005];
	for (int i=1;i<=n;i++){
		scanf("%s", &s);
		if (check(s)==-1) printf("INVALID\n");
		else 
		    if (check(s)) printf("YES\n");
		    else printf("NO\n");
	}
}
