#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[10000000];
int main(){
	faster();
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int dem[2000]={0};
    a[0]=0;dem[0]=0;
    for (int i=1;i<=n;i++){
    	int max=dem[i];
        for (int j=0;j<i;j++)
            if (a[i]>a[j] && dem[j]+1>max) max=dem[j]+1;
        dem[i]=max;
    }
    int max=0;
    for (int i=1;i<=n;i++)
        if (dem[i]>max) max=dem[i];
        cout << max;
} 