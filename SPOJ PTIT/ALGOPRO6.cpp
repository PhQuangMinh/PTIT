#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int tcs(int n){
	int sum=0;
	while (n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int namnhuan(int n){
	if (n%400==0) return 1;
	if (n%4==0 && n%100!=0) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
	int sum=0;
	int ngay;
	for (int i=1;i<=12;i++){
		if (i==2){
			if (namnhuan(n)) ngay=29;
			else ngay=28;
		}
		else if (i<=7 && i%2==1 || i>=8 && i%2==0) ngay=31;
		else ngay=30;
		for (int j=1;j<=ngay;j++)
		    sum=sum+tcs(j) + tcs(i) + tcs(n);
	}
	cout << sum;
}