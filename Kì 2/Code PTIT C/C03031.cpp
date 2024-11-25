#include<stdio.h>
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void solve(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (ucln(a, b)!=ucln(c, d)) printf("NO");
	else printf("YES");
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}
