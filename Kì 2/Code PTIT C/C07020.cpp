#include<stdio.h>
#include<math.h>
typedef struct pokemon{
	char ten[100];
	int tienhoa, tico;
}poke;
int n;
poke a[1000];
int dem, count, max=0, imax;
void doc(){
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		scanf("%s", &a[i].ten);
	    scanf("%d", &a[i].tienhoa);
	    scanf("%d", &a[i].tico);
	    int count=0;
	    while (a[i].tico>=a[i].tienhoa){
	    	int d=a[i].tico/a[i].tienhoa;
	    	count+=d;
	    	a[i].tico=a[i].tico-(a[i].tienhoa-2)*d;
		}
		if (count>max){
			max=count;
			imax=i;
		}
		dem+=count;
	}
}
void duara(){
    printf("%d\n", dem);
    printf("%s", a[imax].ten);
}
int main(){
	doc();
	duara();
}
