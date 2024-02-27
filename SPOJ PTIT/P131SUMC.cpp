#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
double tinh(double a, double c, double b, double d){
	return fabs(a/c-b/d);
}
int main(){
	faster();
    double a, b, c , d;
    cin >> a >> b >> c >> d;
    double kq=0;
    double max=tinh(a, c, b, d);
    if (tinh(c, d, a, b)>max) {
        kq=1;
        max=tinh(c, d, a, b);
    }
    if (tinh(d, b, c, a)>max) {
	    kq=2;
	    max=tinh(d, b, c, a);
	}
    if (tinh(b, a, d, c)>max) kq=3;
    cout << kq;
} 