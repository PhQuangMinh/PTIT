#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct bo{
	int bo1, bo2;
};
bool cmp(bo a, bo b){
	if (a.bo1<b.bo1 || a.bo1==b.bo1 && a.bo2<b.bo2) return 1;
	return 0;
}
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int check[10000]={0};
	check[1]=1;
	bo a[100000];
	for (int i=1;i<=m;i++)
	    cin >> a[i].bo1 >> a[i].bo2;
	sort(a+1, a+m+1, cmp);
	for (int i=1;i<=m;i++)
	    if (check[a[i].bo1]==1) check[a[i].bo2]=1;
	int res=0;
//	for (int i=1;i<=m;i++) 
//	    cout << a[i].bo1 << " " << a[i].bo2 << "\n";
    int ok=0;
	for (int i=1;i<=n;i++)
	    if (check[i]==0){
	    	ok=1;
		    cout << i << "\n";
		}
	if (ok==0) cout << 0;
} 