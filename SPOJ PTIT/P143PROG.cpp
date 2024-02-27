#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int sotre, sokeo;
	cin >> sotre >> sokeo;
	int du=sokeo%(sotre-1);
	int max, min;
	if (du==0){
		max=sotre*(sokeo/(sotre-1));
		min=max-1;
	}
	else{
		max=sokeo+(sokeo/(sotre-1));
		min=max;
	}
	cout << min << " " << max;
}