#include <stdio.h>
#include <math.h>
#include <string.h>

int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}

int main() {
	int a;
	scanf("%d",&a);
	int cas=1;
	while(a--){
		printf("Case #%d:\n",cas);
		cas++;
		int t1, m1, t2, m2;
		scanf("%d%d%d%d",&t1,&m1,&t2,&m2);
		int ucln1 = ucln(t1,m1);
		int ucln2 = ucln(t2,m2);
		t1/=ucln1; m1/=ucln1;
		t2/=ucln2; m2/=ucln2;
		int uc = (m1*m2)/ucln(m1,m2);
		t1*=uc/m1; t2*=uc/m2; m1*=uc/m1; m2*=uc/m2;
		printf("%d/%d %d/%d\n",t1,m1,t2,m2);
		printf("%d/%d\n",t1+t2,m1);
		t1*=m2;
		m1*=t2;
		int res=ucln(t1,m1);
		t1/=res; m1/=res;
		printf("%d/%d\n",t1,m1);
	}
}

	
