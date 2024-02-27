#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int a[20];
    int dem=0;
    int check[50]={0};
    for (int i=1;i<=10;i++){
	    cin >> a[i];
	    int k=a[i]%42;
	    if (check[k]==0) dem++;
	    check[k]++;
	}
	cout << dem;
} 