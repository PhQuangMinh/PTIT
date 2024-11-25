#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp1(string a, string b){
	if (a+b<b+a) return true;
	return false;
}
bool cmp2(int a, int b){
	if (a<b) return true;
	return false;
}
int main(){
	faster();
    string s;
    getline(cin, s);
    string tu[10000];
    long long so[10000];
    while (s!="."){
    	int demtu=0;
    	int demso=0;
    	int n=1;
    	int check[2005]={1};
    	stringstream tach(s);
    	string k;
    	while (tach >> k){
    		k.erase(k.begin()+k.size()-1);
    		if (k[0]=='-' || k[0]>='0' && k[0]<='9'){
    		    stringstream ta(k);
    		    ta >> so[++demso];
    		}
    		else{
			    tu[++demtu]=k;
			    check[n]=1;
			}
    		n++;
		}
		sort(tu+1, tu+demtu+1, cmp1);
		sort(so+1, so+demso+1, cmp2);
//		for (int i=1;i<=demtu;i++) cout << tu[i] << " ";
//		cout << "\n";
//		for (int i=1;i<=demso;i++) cout << so[i] << " ";
		int ds=1;
		int dt=1;
		for (int i=1;i<n;i++){
		    if (check[i]){
		    	cout << tu[dt];
		    	dt++;
			}
			else{
				cout << so[ds];
				ds++;
			}
			if (i!=n-1) cout << ", ";
			else cout << ".";
		}
		cout << "\n";
		getline(cin, s);
	}
}