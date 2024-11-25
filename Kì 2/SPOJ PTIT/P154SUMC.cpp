#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    string s;
    cin >> s;
    int a[200]={0};
    for (int i=0;i<s.size();i++)
        a[(int)s[i]]++;
    int dem=0;
    for (int i=97;i<=122;i++)
        if (a[i]!=0) dem++;
    if (dem%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}
 