#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, a, b;
	cin >> n >> a >> b;
    int res=0;
    int du=0;
    for (int i=1;i<=n;i++){
    	int x;
    	cin >> x;
    	if (x==1){
    		if (a>0) a--;
    		else
    		    if (du>0 || b>0){
    		    	if (du>0) du--;
    		    	else{
    		    		b--;
    		    		du=1;
					}
				}
				else res++;
		}
		if (x==2){
		    if (b>0) b--;
		    else res+=2;
		}
	}
	cout << res;
} 