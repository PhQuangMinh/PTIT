#include<stdio.h>
#include<math.h>
typedef struct mathang{
	int ma;
	char ten[100], nhom[100];
	float mua, ban, loinhuan;
}mathang;
int n;
mathang a[1000];
void doc(){
	scanf("%d", &n);
	getchar();
	for (int i=1;i<=n;i++){
		a[i].ma=i;
		gets(a[i].ten);
		gets(a[i].nhom);
		scanf("%f", &a[i].mua);
	    scanf("%f", &a[i].ban);
	    getchar();
	    a[i].loinhuan=a[i].ban-a[i].mua;
	}
}
void sapxep(){
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i].loinhuan<a[j].loinhuan){
	        	mathang t=a[i];
	        	a[i]=a[j];
	        	a[j]=t;
			}
}
void duara(){
	for (int i=1;i<=n;i++){
		printf("%d %s %s %.2f\n", a[i].ma, a[i].ten, a[i].nhom, a[i].loinhuan);
	}
}
int main(){
	doc();
	sapxep();
	duara();
}
//3
//May tinh SONY VAIO
//Dien tu
//16400
//17699
//Tu lanh Side by Side
//Dien lanh
//18300
//25999
//Banh Chocopie
//Tieu dung
//27.5
//37
