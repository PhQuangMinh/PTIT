#include<stdio.h>
#include<string.h>
int check(char s[], char t[]){
	int ds[20]={0};
	int ns=strlen(s);
	for (int i=0;i<ns;i++)
	    ds[s[i]-'0'] ++;
	int dt[20]={0};
	int nt=strlen(t);
	for (int i=0;i<nt;i++)
	    dt[t[i]-'0']++;
	for (int i=0;i<=9;i++)
	    if (ds[i]!=dt[i]) return 0;
	return 1;
}
void solve(){
	char s[100];
	scanf("%s", &s);
	int ns=strlen(s);
	int kq[1000]={0};
	char res[1000];
	strcpy(res, s);
	for (int ij=1;ij<ns;ij++){
		int nr=strlen(res);
		int i=ns-1, j=nr-1;
		int k=0;
		int du=0;
		while (i>=0 || j>=0){
			int t1=(i>=0) ? s[i]-'0' : 0;
			int t2=(j>=0) ? res[j]-'0' : 0;
			int tong=t1+t2+du;
			kq[++k]=tong%10;
			du=tong/10;
			i--;j--;
		}
		int d=0;
		char tmp[200];
		for (int i=k;i>=1;i--){
			tmp[d++]=kq[i]+'0';
//			printf("%d ", kq[i]);
		}
		strcpy(res, tmp);
		res[d]='\0';
//		printf("%s %d\n", res, k);
		if (check(res, s)==0){
			printf("NO");
			return;
		}
	}
	printf("YES");
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}
//5
//142857
//142856
//142858
//01
//0588235294117647
