#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int a, b, c;
	cin >> a >> b >> c;
	if (a==0){
		if (b==0 && c==0) cout << -1;
	    else
	        if (b==0 && c!=0) cout << 0;
	        else{
	        	printf("1\n%.5lf", -1.0*c/b); 
			}
	    return 0;
	}
	long long t=(long long)b*b-(long long)4*a*c;
	if (t<0) cout << 0;
	    else 
	        if (t==0){
	        	printf("1\n%.5lf", -1.0*b/(2*a));
			}
	        else{
	      	    double x1=1.0*((-b+sqrt(t))/(2*a));
	      	    double x2=1.0*((-b-sqrt(t))/(2*a));
	      	    if (x1>x2) swap(x1, x2);
	      	    printf("2\n%.5lf\n", x1);
	      	    printf("%.5lf", x2);
            }
} 