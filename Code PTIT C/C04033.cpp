#include<stdio.h>
#include<math.h>
int d[100005];
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) {
	    scanf("%d", &a[i]);
	    d[a[i]]++;
	}
	for (int i=1;i<=n;i++) 
	    if (d[a[i]]>0){
		    printf("%d ", a[i]);
		    d[a[i]]=0;
		}
}
