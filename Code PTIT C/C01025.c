#include<stdio.h>
int main(){
	int x1, y1, x2, y2, x3, y3, x4, y4, maxx, maxy;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	scanf("%d%d%d%d", &x3, &y3, &x4, &y4);
	if (x4<=x2){
		if (x3>=x1) maxx=x2-x1;
		else maxx=x2-x3;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	}else{
		if (x3<=x1) maxx=x4-x3;
		else maxx=x4-x1;  
	}
	if (y4>=y2) 
		if (y1>=y3) maxy=y4-y3;
		else maxy=y4-y1;
	if (y3<=y1 && y4<=y2) maxy=y2-y3;
	if  ((y3>=y1) && (y4<=y2)) maxy=y2-y1;  
	if (maxx>maxy) printf("%d", maxx*maxx);
	else printf("%d", maxy*maxy); 
}
