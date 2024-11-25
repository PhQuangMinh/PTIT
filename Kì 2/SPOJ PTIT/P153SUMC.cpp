#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    long long x, y, n;
    cin >> x >> y >> n;
    if (n%6==1) cout << x;
    else
        if (n%6==2) cout << y;
        else 
            if (n%6==3) cout << y-x;
            else 
                if (n%6==4) cout << -x;
                else 
                    if (n%6==5) cout << -y;
                    else 
                        if (n%6==0) cout << x-y;
}