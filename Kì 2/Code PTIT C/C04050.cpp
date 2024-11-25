#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m], b[n];
	int max=0;
	int da[1001]={}, db[1001]={};
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
		da[a[i]]++;
		if(a[i]>max) max=a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		db[b[i]]++;
		if(b[i]>max) max=b[i];
	}
	for(int i=1;i<=max;i++){
		if(da[i]&&db[i]) printf("%d ",i);
	}
	printf("\n");
	for(int i=1;i<=max;i++){
		if(da[i]&&db[i]==0) printf("%d ",i);
	}
	printf("\n");
	for(int i=1;i<=max;i++){
		if(da[i]==0&&db[i]) printf("%d ",i);
	}
}
