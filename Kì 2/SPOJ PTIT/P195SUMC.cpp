#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	int dem25=0, dem50=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		if (x==25) dem25++;
		if (x==50){
			dem25--;
			dem50++;
		}
		if (x==100){
			if (dem50>0){
				dem25--;dem50--;
			}
			else dem25-=3;
		}
		if (dem25<0){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	
}