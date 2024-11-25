#include<stdio.h>
#include<math.h>
typedef struct thisinh{
	int ma;
	char ten[100], ns[100];
	float diem1, diem2, diem3;
	float tong;
}mathang;
int n;
float max=0;
mathang a[1000];
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
	    if (a[i].tong>max) max=a[i].tong;
	}
}
void duara(){
	for (int i=1;i<=n;i++)
	    if (a[i].tong==max){
		printf("%d %s %s %g\n", a[i].ma, a[i].ten, a[i].ns, a[i].tong);
	}
}
int main(){
	doc();
	duara();
}
//3
//Nguyen Van A
//12/12/1994
//3.5
//7.0
//5.5
//Nguyen Van B
//1/9/1994
//7.5
//9.5
//9.5
//Nguyen Van C
//6/7/1994
//8.5
//9.5
//8.5
