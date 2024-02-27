#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DATA.in", "r", stdin);
    string s;
    int dem[2000] = {0};
    while (cin >> s){
        int x = stoi(s);
        dem[x]++;
    }
    for (int i=0;i<=1500;i++)
        if (dem[i]>0) cout << i << " " << dem[i] << "\n";
}