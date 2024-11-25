#include<stdio.h>
#include<math.h>
typedef struct thisinh{
	int ma;
	char ten[100];
	float diem1, diem2, diem3;
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
		scanf("%f%f%f", &a[i].diem1, &a[i].diem2, &a[i].diem3);
		getchar();
	}
	n+=them;
}
void sua(){
	int masv;
	scanf("%d", &masv);
	getchar();
	gets(a[masv].ten);
	scanf("%f%f%f", &a[masv].diem1, &a[masv].diem2, &a[masv].diem3);
	getchar();
	printf("%d\n", masv);
}
void duara(){
//    printf("aaaa");
	for (int i=1;i<=n;i++){
		if (a[i].diem1<a[i].diem2 && a[i].diem2<a[i].diem3)
		    printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].diem1, a[i].diem2, a[i].diem3);
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
//5.5 6.0 6.5
//3

