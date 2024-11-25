#include<stdio.h>
#include<string.h>
void solve(char s[], int n){
	int mid=n/2;
	char dau[105], cuoi[105];
	strncpy(dau, s, mid);
	dau[mid]='\0';
	strncpy(cuoi, s+mid, n-mid);
	cuoi[n-mid]='\0';
	int kq[300]={0};
//	printf("%s %s ", dau, cuoi);
	int nd=strlen(dau);
	int nc=strlen(cuoi);
	int i=nd-1;
	int j=nc-1;
	int du=0;
	int k=0;
	while (i>=0 || j>=0){
		int t1=(i>=0) ? dau[i]-'0' : 0;
		int t2=(j>=0) ? cuoi[j]-'0': 0;
		int tong=t1+t2+du;
		if (tong>=10){
		    kq[++k]=tong%10;
		    du=tong/10;
		}
		else{
			du=0;
			kq[++k]=tong;
		}
		i--;j--;
	}
	if (du==1) kq[++k]=1;
	while (k>1 && kq[k]==0) k--;
	for (int i=k;i>=1;i--) printf("%d", kq[i]);
	if (k==1) return;
	else{
	    printf("\n");
	    char res[300];
	    int d=0;
	    for (int i=k;i>=1;i--){
	    	res[d++]=kq[i]+'0';
		}
		solve(res, d);
	}
	
}
int main(){
	char s[205];
	gets(s);
	int n=strlen(s);
	solve(s, n);
}
