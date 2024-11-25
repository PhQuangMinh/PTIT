#include<stdio.h>
#include<string.h>
void solve(){
	char s[1005], t[1005];
	scanf("%s", &s);
	scanf("%s", &t);
	int n=strlen(s)-1;
	int m=strlen(t)-1;
	int du=0;
	int k=0;
	int kq[1005];
	while (n>=0 || m>=0){
		int t1= (n>=0) ? s[n] - '0' : 0;
		int t2= (m>=0) ? t[m] - '0' : 0;
		int tong = t1 + t2 + du;
		k++;
		kq[k]=tong%10;
		du=tong/10;
		n--;m--;
	}
    if (du==1) kq[++k]=1;
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
