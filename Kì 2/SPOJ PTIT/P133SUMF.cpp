#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int a[5];
    cin >> a[1] >> a[2] >> a[3];
    sort(a+1, a+4);
    if(a[3]-a[2]==a[2]-a[1]) cout<< a[3]+a[3]-a[2];
    if(a[3]-a[2]<a[2]-a[1]) cout << (a[1]+a[2])/2;
    if(a[3]-a[2]>a[2]-a[1]) cout<<(a[2]+a[3])/2;
} 