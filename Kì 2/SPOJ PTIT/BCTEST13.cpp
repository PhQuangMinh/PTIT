#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long luu[10000];
int d=0;
long long b[20];
void luuso(int n){
	long long t=0;
	for (int i=1;i<=n;i++)
	   t=t*10+b[i];
	luu[++d]=t;
}
void ql(int x, int n, int a[]){
	for (int i=1;i<=2;i++){
		b[x]=a[i];
		if (x==n) luuso(n);
		else ql(x+1, n, a);
	}
}
int main(){
	long long l, r;
	cin >> l >> r;
	int a[5];
	a[1]=4;
	a[2]=7;
	for (int i=1;i<=10;i++){
		ql(1, i, a);
	}
//	for (int i=1;i<=d;i++) cout << luu[i] << " ";
	long long dau=1;
	while (luu[dau]<l) dau++;
	long long cuoi=dau;
	while (luu[cuoi]<r) cuoi++;
	if (l==r){
		cout << luu[dau];
		return 0;
	}
	if (luu[dau]==luu[cuoi]){
		cout << (r-l+1)*luu[dau];
		return 0;
	}
    long long sum=0;
	for (int i=dau;i<=cuoi;i++){
		if (i==dau){
		    sum+=(luu[i]-l+1)*luu[i];
		    l=luu[i];
		}
		else{
			if (i!=cuoi){
				sum+=(luu[i]-l)*luu[i];
				l=luu[i];
			}
			else{
					sum+=(r-l)*luu[i];
			}
		}
	}
	cout << sum;
} 