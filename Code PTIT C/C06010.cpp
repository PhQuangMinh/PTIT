#include<stdio.h>
#include<math.h>
#include<string.h>
int tn(char s[]){
	int n=strlen(s);
	for (int i=0;i<n;i++)
	    if (s[i]!=s[n-i-1]) return 0;
	return 1;
}
int check(char s[]){
	int n=strlen(s);
	for (int i=0;i<n;i++){
		int k=s[i]-'0';
		if (k%2==1) return 0;
	}
	if (tn(s)) return 1;
	return 0;
}
void solve(){
	char s[505];
	scanf("%s", &s);
	if (check(s)) printf("YES");
	else printf("NO");
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
//4
//123456787654321
//86442824468
//8006000444422220000222244440006008
//235365789787654324567856578654356786556
