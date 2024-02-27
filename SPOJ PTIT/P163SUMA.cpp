#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a>b) return 1;
	return 0;
}
int main(){
	faster();
	int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int d[30]={0};
    for (int i=0;i<n;i++){
    	d[s[i]-64]++;
	}
	sort(d+1, d+27, cmp);
	long long res=0;
	int i=1;
	while (m!=0){
		if (d[i]<=m){
			res+=(long long)d[i]*d[i];
			m-=d[i];
		}
		else{
			res+=(long long)m*m;
			m=0;
		}
		i++;
	}
	cout << res;
} 