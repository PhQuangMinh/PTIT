#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int dai, rong, a; 
    cin >> dai >> rong >> a;
    if (rong>dai) swap(rong, dai);
    long long kq=(long long)(dai/a)*(rong/a);
    int d=(dai+a-1)/a;
    int r=(rong+a-1)/a;
    if (dai%a==0 && rong%a!=0) kq+=d;
    else 
        if (rong%a==0 && dai%a!=0) kq+=r;
        else 
		    if (rong%a!=0 && dai%a!=0) kq+=r+d-1;
    cout << kq;
}
 