#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
    long long a, b;
    cin >> a >> b;
    int dem=0;
    int ok=1;
    while (b>0){
    	dem++;
    	if (b%10!=9) ok=0;
    	b/=10;
	}
	if (ok) dem++;
	else dem--;
	cout << dem*a << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 