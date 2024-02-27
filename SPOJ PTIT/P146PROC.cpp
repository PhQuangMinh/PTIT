#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[10000000];
int main(){
	faster();
    int a[4];
    for (int i=0;i<4;i++) cin >> a[i];
    sort(a, a+4);
    int dem=1;
    for (int i=0;i<3;i++)
        if (a[i]==a[i+1]) dem++;
    cout << dem-1;
} 