#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
    int a[10];
    int max=0;
    int d=1;
    for (int i=1;i<=6;i++) cin >> a[i];
    sort(a+1, a+7, cmp);
    a[7]=-1;
    for (int i=1;i<=6;i++)
        if (a[i]==a[i+1]) d++;
        else {
        	if (d>max) max=d;
        	d=1;
		}
	if (max<4) cout << "Alien";
	else{
		if (max==5) cout << "Bear";
		if (max==6) cout << "Elephant";
		if (max==4){
			if (a[1]==a[2] && a[2]!=a[3] || a[5]==a[6] && a[4]!=a[5])
			    cout << "Elephant";
			else cout << "Bear"; 
		}
	}
}