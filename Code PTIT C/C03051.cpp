#include<stdio.h>
#include<math.h>
#include<string.h>
int sang[1000000];
void sangnt(){
	sang[1]=1;
	int i, j;
	for(i=2;i<=sqrt(1000000);i++){
		for(j=2;j<=1000000/i;j++) sang[j*i]=1;
	}
}
void solve(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	int l=sqrt(a);
	if (l*l!=a || l==1) l++;
	int r=sqrt(b);
	int dem=0;
    for (int i=l;i<=r;i++)
        if (sang[i]==0) dem++;
    printf("%d\n", dem);
}
int main(){
	int n;
	scanf("%d", &n);
	sangnt();
	while (n--) solve();
}
