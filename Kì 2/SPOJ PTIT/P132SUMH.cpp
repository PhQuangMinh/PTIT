#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int ch1, ci1, ch2, ci2;
string dem(int t){
	int d=0;
	int du1=t%(ch1+ci1);
	if (du1<=ch1 && du1>0) d++;
	int du2=t%(ch2+ci2);
	if (du2<=ch2 && du2>0) d++;
	if (d==2) return "both";
	if (d==1) return "one";
	return "none";
}
int main(){
	faster();
	int ti, teo, to;
    cin >> ch1 >> ci1 >> ch2 >> ci2;
    cin >> ti >> teo >> to;
    cout << dem(ti) << "\n" << dem(teo) << "\n" << dem(to);
}
 