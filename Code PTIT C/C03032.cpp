#include <stdio.h>
#include <math.h>
int sang[1000005];
void sangnt(){
	sang[0]=1;
	sang[1]=1;
	int i, j;
	for(i=2;i*i<=1000000;i++){
		for(j=i*i;j<=1000000;j+=i) sang[j]=1;
	}
}
int check(int x){
	while (x!=0){
		int k=x%10;
		if (sang[k]) return 0;
		x/=10;
	}
	return 1;
}
int dem[1000005];
void demsnt(){
	dem[0]=0;
	for (int i=1;i<=1000000;i++)
	    if (sang[i]==0 && check(i)==1) dem[i]=dem[i-1]+1;
	    else dem[i]=dem[i-1];
}
void solve() {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a==0) a=1;
	printf("%d", dem[b]-dem[a-1]);
}
int main(){
	int t;
	scanf("%d", &t);
	sangnt();
	demsnt();
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}

