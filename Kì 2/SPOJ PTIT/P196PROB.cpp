#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    long long a, b, c;
    cin >> a >> b >> c;
    long long t=min(a, b);
    long long t1=min(t, c);
    long long t2=max(a, b);
    long long t3=max(t2, c);
    cout << t3-t1;
}
 