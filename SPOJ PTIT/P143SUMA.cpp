#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct rong{
	int st, hp;
};
bool cmp(rong a, rong b){
	if (a.st<b.st) return 1;
	return 0;
}
int main(){
	faster();
    int n, k; 
    cin >> k >> n;
    rong a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i].st >> a[i].hp;
    sort(a+1, a+n+1, cmp);
    for (int i=1;i<=n;i++)
        if (k>a[i].st){
        	k+=a[i].hp;
		}
		else{
			cout << "NO";
			return 0;
		}
	cout << "YES";
}
 