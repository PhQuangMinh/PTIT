#include<stdio.h>
#include<math.h>
typedef struct diem{
	double x, y;
}diem;
double kc(double a, double b, double c, double d){
	return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
int check(double a, double b, double c){
	if (a+b>c && a+c>b && b+c>a) return 1;
	return 0;
}
void solve(){
	diem a, b, c;
	scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
	double d1=kc(a.x, a.y, b.x, b.y);
	double d2=kc(a.x, a.y, c.x, c.y);
	double d3=kc(b.x, b.y, c.x, c.y);
	if (check(d1, d2, d3)==0){
		printf("INVALID");
		return;
	}
	double p=(d1+d2+d3)/2;
	double dt=sqrt(p*(p-d1)*(p-d2)*(p-d3));
	printf("%.2lf", dt);
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) printf("\n");
	}
}
