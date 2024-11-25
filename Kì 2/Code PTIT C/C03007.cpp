#include <stdio.h>
#include <math.h>
int nt[1000005];
void sangnt(){
	nt[1]=1;
	int i, j;
	for(i=2;i<=sqrt(1000000);i++){
		for(j=2;j<=1000000/i;j++) nt[j*i]=1;
	}
}
int checktn(int x){
	int k=x;
	int t=0;
	while (k!=0){
		t=t*10+k%10;
		k/=10;
	}
	if (t==x) return 1;
	return 0;
}
void solve(){
	int a, b;
	scanf("%d%d", &a, &b);
	int d=0;
	for (int i=a;i<=b;i++){
		if (nt[i]==0 && checktn(i)){
			if (d==10){
			    printf("\n");
			    d=0;
		    }
			printf("%d ", i);
			d++;
		}
	}
}
int main() {
	int n;
	scanf("%d",&n);
	sangnt();
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n\n");
	}
}
//2
//20 1234
//123 140

