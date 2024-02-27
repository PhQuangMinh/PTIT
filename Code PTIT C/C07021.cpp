#include<stdio.h>
#include<math.h>
typedef struct thisinh{
	int ma;
	char ten[100], diem[100];
}ts;
int n=0;
ts a[10000];
void them(){
	int them;
	scanf("%d", &them);getchar();
	printf("%d\n", them);
	for (int i=n+1;i<=n+them;i++){
		a[i].ma=i;
		gets(a[i].ten);
		gets(a[i].diem);
	}
	n+=them;
}
void sua(){
	int masv;
	scanf("%d", &masv);
	getchar();
	gets(a[masv].ten);
	gets(a[masv].diem);
	printf("%d\n", masv);
	fflush(stdin);
}
void duara(){
	for (int i=n;i>=1;i--){
		printf("%d %s %s\n", a[i].ma, a[i].ten, a[i].diem);
	}
}
int main(){
	int chon;
	do{
		scanf("%d", &chon);fflush(stdin);
	    switch (chon){
		    case 1:{
			    them();
			    break;
		    }
		    case 2:{
		    	sua();
				break;
			}
			case 3:{
				duara();
				return 0;
				break;
			}	
	    }
    }while (chon!=3);
}
//1
//2
//nguyen van hai
//8.5 5.5 7.5
//tran van tuan
//8.5 .50 9.0
//2
//2
//tran van nam
//5.5 5.0 6.0
//3

