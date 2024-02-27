#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct doi{
	string ten;
	int diem;
};
bool cmp(doi a, doi b){
	if (a.diem>b.diem || a.diem==b.diem && a.ten+b.ten<b.ten+a.ten) return true;
    return false;
}
void thang(string x, string b, doi a[], int n){
	for (int i=1;i<=n;i++)
	    if (a[i].ten==x) a[i].diem+=3;
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=n;i++)
	    if (a[i].ten==x){
		    cout << i << " ";
		    a[i].diem-=3;
		    break;
		}
}
void thua(string x, string b, doi a[], int n){
	for (int i=1;i<=n;i++)
	    if (a[i].ten==b){
		    a[i].diem+=3;
		}
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=n;i++)
	    if (a[i].ten==x) cout << i << " ";
	    else 
	        if (a[i].ten==b) a[i].diem-=3;
}
void hoa(string x, string b, doi a[], int n){
	for (int i=1;i<=n;i++)
	    if (a[i].ten==x) a[i].diem++;
	    else
	        if (a[i].ten==b){
			    a[i].diem++;
			}
	sort(a+1, a+n+1, cmp);
	for (int i=1;i<=n;i++)
	    if (a[i].ten==x){
		    cout << i << "\n";
		    a[i].diem--;
		}
		else
		    if (a[i].ten==b) a[i].diem--;
}
void solve(){
	int n;
	cin >> n;
	doi a[10000];
	string teamj, teamdj;
	cin >> teamj >> teamdj;
	for (int i=1;i<=n;i++)
	    cin >> a[i].ten >> a[i].diem;
	thang(teamj, teamdj, a, n);
	thua(teamj, teamdj, a, n);
	hoa(teamj, teamdj, a, n);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 