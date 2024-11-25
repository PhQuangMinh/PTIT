#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	cin >> n;
	int a[20]={0};
	int sum=0;
//	int ok=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		a[x]++;
		sum+=x;
//		if (x!=0) ok=1;
	}
	int ok=1;
	if (sum%3==0){
		for (int i=9;i>=0;i--)
		    for (int j=1;j<=a[i];j++){
			    cout << i;
			    ok=0;
			}
	}
	if (sum%3==1){
		if (a[1]>0) a[1]--;
		else 
		    if (a[4]>0) a[4]--;
		    else
		        if (a[7]>0) a[7]--;
		        else
		            if (a[2]>0){
		            	a[2]--;
		            	if (a[2]>0) a[2]--;
		            	else
		            	    if (a[5]>0) a[5]--;
					}
		            else
		                if (a[5]>0){
		                	a[5]--;
		                	if (a[5]>0) a[5]--;
		                	else
		                	    if (a[8]>0) a[8]--;
		                }
		                else
		                    if (a[8]>0){
		                    	a[8]--;
		                    	if (a[2]>0) a[2]--;
		                    	else
		                    	    if (a[8]>0) a[8]--;
							}
		                    else{
		                    	cout << "-1\n";
		                    	return;
							}
		for (int i=9;i>=0;i--)
		    for (int j=1;j<=a[i];j++){
		    	cout << i;
		    	ok=0;
		    }
	}
	if (sum%3==2){
		if (a[2]>0) a[2]--;
		else 
		    if (a[5]>0) a[5]--;
		    else
		        if (a[8]>0) a[8]--;
		        else
		            if (a[1]>0){
		            	a[1]--;
		            	if (a[1]>0) a[1]--;
		            	else
		            	    if (a[4]>0) a[4]--;
					}
		            else
		                if (a[4]>0){
		                	a[4]--;
		                	if (a[4]>0) a[4]--;
		                	else
		                	    if (a[7]>0) a[7]--;
		                }
		                else
		                    if (a[7]>0){
		                    	a[7]--;
		                    	if (a[1]>0) a[1]--;
		                    	else
		                    	    if (a[7]>0) a[7]--;
							}
		                    else{
		                    	cout << "-1\n";
		                    	return;
							}
		for (int i=9;i>=0;i--)
		    for (int j=1;j<=a[i];j++){
		    	cout << i;
		    	ok=0;
		    }
	}
	if (ok==1) cout << "-1\n";
	else cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 