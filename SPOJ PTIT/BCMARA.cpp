#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
struct mara{
	int gio, phut, giay;
};
bool cmp(mara a, mara b){
	if (a.gio<b.gio) return 1;
	if (a.gio==b.gio && a.phut<b.phut) return 1;
	if (a.gio==b.gio && a.phut==b.phut && a.giay<b.giay) return 1;
    return 0;
}
int main(){
	faster();
    int n;
    mara a[10000];
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    sort(a+1, a+n+1, cmp);
    for (int i=1;i<=n;i++)
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << "\n";
} 