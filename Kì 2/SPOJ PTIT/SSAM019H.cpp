#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct matran{
	long long mt[2][2];
	matran(){
		mt[0][0]=0;
		mt[0][1]=1;
		mt[1][0]=1;
		mt[1][1]=1;
	}
};
matran nhan(matran a, matran b){
	matran res;
    for (int i=0; i<=1; i++)
        for (int j=0; j<=1; j++){
            res.mt[i][j] = 0;
            for (int k=0; k<=1; k++)
                res.mt[i][j] = (res.mt[i][j]+a.mt[i][k]*b.mt[k][j])%mod;
        }
    return res;
}
matran kq(matran a, long long n){
	if (n==1) return a;
	if (n%2==1) return nhan(kq(a, n-1), a);
	matran t=kq(a, n/2);
	return nhan(t, t);
}
void solve(){
	long long n;
	cin >> n;
	matran t;
	t=kq(t, n);
	cout << t.mt[0][1] << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 