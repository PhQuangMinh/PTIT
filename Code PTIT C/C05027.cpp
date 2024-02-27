#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int minx=1e9+9, miny=1e9+9;
	for (int i=1;i<=n;i++){
		int x, y;
		scanf("%d%d", &x, &y);
		minx=fmin(minx, x);
		miny=fmin(miny, y);
	}
	long long res=(long long)minx*miny;
	printf("%lld", res);
}
