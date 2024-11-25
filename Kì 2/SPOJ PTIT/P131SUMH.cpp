#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int a, b, c;
    cin >> a >> b >> c;
    if (b-a>c-b) cout << b-a-1;
    else cout << c-b-1;
} 