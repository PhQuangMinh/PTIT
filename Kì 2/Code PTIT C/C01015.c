#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a==0){
		if (b==0 && c!=0) printf("NO");
	        else printf("%.2lf", (float)(-c)/b);
	    return 0;
	}
	int t=b*b-4*a*c;
	if (t<0) printf("NO");
	   else 
	      if (t==0) printf("%.2f", (float)(-b)/(2*a));
	      else{
	      	   float x1=1.0*((-b+sqrt(t))/(2*a));
	      	   float x2=1.0*((-b-sqrt(t))/(2*a));
	      	   if (x1>x2) printf("%.2f %.2f", x1, x2);
	      	   else printf("%.2f %.2f", x1, x2);
           }
}
