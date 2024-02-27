#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
   string a, b;
   cin >> a >> b;
   int dema[150]={0};
   for (int i=0;i<a.size();i++) dema[a[i]]++;
   int demb[150]={0};
   for (int i=0;i<b.size();i++) demb[b[i]]++;
   int dem=0;
   for (int i=97;i<=122;i++)
       dem+=abs(dema[i]-demb[i]);
    cout << dem;
} 