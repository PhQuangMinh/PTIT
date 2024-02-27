#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n<6) return 0;
	if (n>=6 && n<28) printf("6");
	else
	    if (n<496) printf("6 28");
	    else 
	        if (n<8128) printf("6 28 496");
	        else
	            printf("6 28 496 8128");
}
