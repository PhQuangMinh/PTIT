#include<stdio.h>
void solve(){
	int b, p, i;
	scanf("%d%d", &b, &p);
	if (p==1){
		printf("0\n");
		return;
	}
	if (p==2){
		if (b%2==1) printf("%d\n", b/2+1);
		else printf("%d\n", b/2);
	    return;
	}
	int dem=0, d=0;
	for (i=1;i<p;i++) 
		if ((long long)i*i%p==1) d++;
	int k=b/p;
	dem=dem+k*d;
	b=b%p;
	for (i=1;i<=b;i++)
	    if ((long long)i*i%p==1) dem++;
	printf("%d\n", dem);
}
int main(){
	int t, i;
	scanf("%d", &t);
	for (i=1;i<=t;i++) solve();
	return 0;
} 