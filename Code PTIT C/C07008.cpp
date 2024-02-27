#include<stdio.h>
#include<string.h>
void xuly(char s[], int dt[]){
	int ns=strlen(s);
	for (int i=0;i<ns;i++)
	    if (s[i]=='x'){
	    	int mu=0, j=i+2;
	    	while (s[j]!=' ' && j<ns){
	    		mu=mu*10+(s[j]-'0');j++;
			}
	    	int kq=0, d=1;
	    	j=i-2;
	    	while (j>=0 && s[j]!=' '){
	    		kq+=d*(s[j]-'0');
	    		j--;
	    		d*=10;
			}
	    	dt[mu]+=kq;
		}	
}
void solve(){
	char s[100005], t[100005];
	gets(s);
	gets(t);
	int dt[10005]={0};
	xuly(s, dt);
	xuly(t, dt);
	int ok=0;
	for (int i=10001;i>=0;i--){
		if (dt[i]>0){
			if (ok==1)
			    printf(" + %d*x^%d", dt[i], i);
			else{
			    printf("%d*x^%d", dt[i], i);
			    ok=1;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	getchar();
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}
