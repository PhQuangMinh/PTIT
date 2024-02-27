#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct thisinh{
	int ma;
	char ten[100], ns[100];
	float diem1, diem2, diem3;
	float tong;
}ts;
int n;
ts a[1000];
void doc(){
	scanf("%d", &n);
	getchar();
	for (int i=1;i<=n;i++){
		a[i].ma=i;
		gets(a[i].ten);
		gets(a[i].ns);
		scanf("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3);
	    getchar();
	    a[i].tong=a[i].diem1+a[i].diem2+a[i].diem3;
	}
}
void sapxep(){
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i].tong<a[j].tong || a[i].tong==a[j].tong && a[i].ma>a[j].ma){
	        	ts t=a[i];
	        	a[i]=a[j];
	        	a[j]=t;
			}
}
void duara(){
	for (int i=1;i<=n;i++){
		printf("%d %s %s %.1f\n", a[i].ma, a[i].ten, a[i].ns, a[i].tong);
	}
}
int main(){
	doc();
	sapxep();
	duara();
}
//3
//Nguyen Van A
//12/12/1994
//7.0
//7.0
//7.0
//Nguyen Van B
//1/9/1994
//7.5
//9.5
//9.5
//Nguyen Van C
//6/7/1994
//10.0
//10.0
//1.0
