#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return 1;
	return 0;
}
int tri(int a, int b, int c){
	if (a+b>c && a+c>b && b+c>a) return 1;
	return 0;
}
int seg(int a, int  b, int c){
	if (a+b==c || b+c==a || a+c==b) return 1;
	return 0;
}
int main(){
	faster();
	int a[10];
	for (int i=1;i<=4;i++) cin >> a[i];
	sort(a+1, a+5, cmp);
	if (tri(a[1], a[2], a[3]) || tri(a[2], a[3], a[4]) || tri(a[1], a[2], a[4]) || tri(a[1], a[3], a[4])){
		cout << "TRIANGLE";
		return 0;
	}
	if (seg(a[1], a[2], a[3]) || seg(a[2], a[3], a[4]) || seg(a[1], a[2], a[4]) || seg(a[1], a[3], a[4])){
		cout << "SEGMENT";
		return 0;
	}
	cout << "IMPOSSIBLE";
} 