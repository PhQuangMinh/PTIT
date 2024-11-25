#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int max=n;
    int min=1;
    for (int i=1;i<=n;i++){
    	if (i%2==1){
    		int dem=0;
    		int k;
    		for (int j=min;j<=max;j++)
    		    if (a[j]==min) k=j;
    		dem+=k-min;
    		if (k!=min){
    			for (int j=k;j>=min;j--){
//   				cout << a[j] << "a " << a[j-1] << "\n";
    			    a[j]=a[j-1];
    			}
//    			cout << "\n";
    			a[min]=min;
			}
//			cout << min << " " << k << "a ";
			min++;
//			cout << k << "a ";
//			for (int i=1;i<=n;i++) cout << a[i] << " ";
			cout << dem << "\n";
		}
		else{
			int dem=0;
    		int k;
    		for (int j=min;j<=max;j++)
    		    if (a[j]==max) k=j;
    		dem+=max-k;
    		if (k!=max){
    			for (int j=k;j<max;j++)
    			    a[j]=a[j+1];
    			a[max]=max;
			}
//			cout << max << " " << k << "a ";
			max--;
//			for (int i=1;i<=n;i++) cout << a[i] << " ";
			cout << dem << "\n";
		}
	}
}