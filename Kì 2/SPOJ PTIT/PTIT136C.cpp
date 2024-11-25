#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    int a[n+5][n+5];
    int sum=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            sum+=a[i][j];
        }
    if (n==2){
    	int x=a[1][2]/2;
    	cout << x << " " << x;
    	return 0;
	}
    sum/=(2*n-2);
    for (int i=1;i<=n;i++){
    	int sumhang=0;
    	for (int j=1;j<=n;j++)
    	    sumhang+=a[i][j];
    	cout << (sumhang-sum)/(n-2) << " "; 
	}
} 