#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int a, b;
    cin >> a >> b;
    int demti=0, demteo=0, dem=0;
    for (int i=1;i<=6;i++)
        if (abs(i-a)==abs(i-b)) dem++;
        else
            if (abs(i-a)>abs(i-b)) demteo++;
            else demti++;
    cout << demti << " " << dem << " " << demteo;
}