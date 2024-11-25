#include<stdio.h>
#include<string.h>
int check(char s[]){
	int demc=0, deml=0;
	int n=strlen(s);
	for (int i=0;i<n;i++){
		if (s[i]<'0' || s[i]>'9' || s[0]=='0') return -1;
        int k=s[i]-'0';
        if (k%2==0) demc++;
        else deml++;
    }
	if (n%2==0 && demc>deml || n%2==1 && demc<deml)
	    return 1;
	return 0;
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
