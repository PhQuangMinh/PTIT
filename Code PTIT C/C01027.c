#include <stdio.h> 
int Ucln(int a, int b){ 
    int t = b % a; 
	while (t != 0){ 
	    t=a%b;
	    a=b;
	    b=t;
	} 
	return a; 
} 
int main() {
    int t; 
	scanf("%d", &t);
	while (t-- != 0){
	   int n, m; 
	   scanf("%d%d", &n, &m); 
	   printf("%d\n", Ucln(n , m)); 
	}
	return 0; 
}
