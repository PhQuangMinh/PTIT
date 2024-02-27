#include<stdio.h>
#include<math.h>
typedef struct pt{
	int x, sl;
}pt;
void solve(){
	int n;
	scanf("%d", &n);
	printf("%d = ", n);
	int dem=0;
	pt a[10000];
	for (int i=2;i<=sqrt(n);i++){
		int d=0;
		while (n%i==0){
			d++;
			n/=i;
		}
		if (d>0){
			a[++dem].x=i;
			a[dem].sl=d;
		}	
	}
	if (n>1){
		a[++dem].x=n;
		a[dem].sl=1;
	}
	for (int i=1;i<=dem;i++){
	    printf("%d^%d", a[i].x, a[i].sl);
	    if (i!=dem) printf(" * ");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
