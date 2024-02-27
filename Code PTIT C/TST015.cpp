#include<stdio.h>
#include<math.h>
typedef struct tg{
	int x, y, z;
	float dt;
}tg;
int n;
void nhap(tg a[]){
	scanf("%d", &n);
	for (int i=1;i<=n;i++)
	    scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].z);
}
float dt(tg a[]){
    for (int i=1;i<=n;i++){
    	float p=(a[i].x+a[i].y+a[i].z)/2;
    	a[i].dt=sqrt(p*(p-a[i].x)*(p-a[i].y)*(p-a[i].z));
	}
}
void in(tg a[]){
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i].dt>a[j].dt){
	        	tg tmp=a[i];
	        	a[i]=a[j];
	        	a[j]=tmp;
			}
	for (int i=1;i<=n;i++){
		printf("%d %d %d", a[i].x, a[i].y, a[i].z);
		if (i!=n) printf("\n");
	}
}
int main(){
	tg a[10000];
	nhap(a);
	dt(a);
	in(a);
}

