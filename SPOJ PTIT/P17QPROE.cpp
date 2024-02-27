#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    int i=1, j=n;
    int res=0;
    while (i<j){
    	if (a[i]==a[j]){
    		i++;
    		j--;
		}
		else
		    if (a[i]<a[j]){
		        i++;
		        res++;
		    	a[i]+=a[i-1];
			}
			else{
				j--;
		        res++;
		    	a[j]+=a[j+1];
			}
	}
	cout << res;
} 