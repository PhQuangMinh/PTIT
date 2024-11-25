#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[10000000];
int main(){
	faster();
    int a, b, v;
    cin >> a >> b >> v;
    int dis=a-b;
    int t=v-a;
    int time=t/dis;
    if (dis*time==t) time++;
    else time+=2;
    cout << time;
}