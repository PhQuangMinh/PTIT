#include<stdio.h>
#include<string.h>
void solve(){
	char s[1005], t[1005];
	scanf("%s", &s);
	scanf("%s", &t);
	if (strlen(t)>strlen(s) || strlen(t)==strlen(s) && strcmp(s, t)<0){
		char k[1005];
		strcpy(k, s);
		strcpy(s, t);
		strcpy(t, k);
	}
	int n=strlen(s)-1;
	int m=strlen(t)-1;
	int du=0;
	int k=0;
	int kq[1005];
	while (n>=0 || m>=0){
		int t1= (n>=0) ? s[n] - '0' : 0;
		int t2= (m>=0) ? t[m] - '0' : 0;
		int hieu = t1 - t2 - du;
		if (hieu<0) {
			hieu+=10;
			du=1;
		}else du=0;
		kq[++k]=hieu%10;
		n--;m--;
	}
	while (k>1 && kq[k]==0) k--;
	for (int i=k;i>=1;i--) printf("%d", kq[i]);
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
	    solve();
	    if (i!=t) printf("\n");
	}
}
