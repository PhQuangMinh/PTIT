#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int v, x, d;
    cin >> v >> x >> d;
    int max=0;
    if (x>=v+1 && d>=v+2 && 3*v+3>max) max=3*v+3;
    if (d>=x+1 && x-1<=v && 3*x>max) max=3*x;
    if (x>=d-1 && v>=d-2 && 3*d-3>max) max=3*d-3;
    cout << max;
}