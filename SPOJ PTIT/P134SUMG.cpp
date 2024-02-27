#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int minlech=INT_MAX;
int tich, tong, min1;
int check[20]={0};
void ql(int x, int n, int a[], int b[]){
	if (x!=n) min1=min(min1, abs(tich - tong));
	else return;
	for (int i=1;i<=n;i++){
		if (check[i]==0){
			check[i]=1;
			tich*=a[i];
			tong+=b[i];
			ql(x+1, n, a, b);
			check[i]=0;
			tich=tich/a[i];
			tong-=b[i];
		}
	}
}
int main(){
	faster();
	int n;
	cin >> n;
	int a[100], b[100];
	for (int i=1;i<=n;i++) cin >> a[i] >> b[i];
	for (int i=1;i<=n;i++){
		min1=abs(a[i]-b[i]);
		tich=a[i];
		tong=b[i];
		check[i]=1;
		ql(0, n, a, b);
		check[i]=0;
		minlech=min(minlech, min1);
	}
	cout << minlech;
}