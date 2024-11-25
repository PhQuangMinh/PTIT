#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int d[500][500];
//int beu2(int a, int b, int c, int k){
//	int sum=0;
//	for (int i=0;i<=k;i++)
//	    sum+=d[a+i][b+i];
//    for (int i=0;i<=k;i++)
//        sum-=d[c-i][b+i];
//    return sum;
//}
int beu(int a, int b, int c, int k){
	int sum=0;
	for (int i=0;i<=k;i++)
	    sum+=d[a+i][b+i];
    for (int i=0;i<=k;i++)
        sum-=d[c-i][b+i];
    return sum;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++) cin >> d[i][j];
	int res=-mod;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++){
	    	if (i>=j){
	    	    for (int k=1;k<=n-j;k++) 
	    	        res=max(res, beu(i, j, i+k, k));
	    	    }
	    	else{
	    		for (int k=1;k<=n-i;k++) 
	    	        res=max(res, beu(i, j, i+k, k));
			}
//			cout << res << "a\n";
		}
//	cout << beu(1, 1, 3);
	cout << res;
}