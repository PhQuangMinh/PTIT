#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long f[100];
void fibo(){
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for (int i=3;i<=90;i++)
        f[i]=f[i-1]+f[i-2];
}
int main(){
	faster();
	fibo();
	int n;
    cin >> n;
    cout << f[n];
} 