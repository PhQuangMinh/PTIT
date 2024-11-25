#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int uoc[1000005];
int dem[1000005];
void uocso(){
	for (int i=1;i<=1000000;i++)
	    for (int j=i;j<=1000000;j+=i){
	        uoc[j]+=i;
	        dem[j]++;
	    }
}
long long tonguoc[1000005];
long long demuoc[1000005];
void tongdemuoc(){
	tonguoc[0]=0;
	demuoc[0]=0;
	for (int i=1;i<=1000000;i++){
	    tonguoc[i]=tonguoc[i-1]+uoc[i];
	    demuoc[i]=demuoc[i-1]+dem[i];
	}
}
void solve(){
	int a, b;
	cin >> a >> b;
    if (a==0 && b==0) cout << 0 << " " << 0 << "\n";
	if (a==0) a++;
	if (a>b) swap(a, b);
	cout << demuoc[b]-demuoc[a-1] << " " << tonguoc[b]-tonguoc[a-1] << "\n";
}
int main(){
	faster();
	uocso();
	tongdemuoc();
//	for (int i=1;i<=10;i++) cout << dem[i] << " " << uoc[i] << "\n";
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 