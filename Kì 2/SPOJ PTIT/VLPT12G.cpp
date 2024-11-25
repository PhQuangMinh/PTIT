#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int a, b;
    cin >> a >> b;
    int test=0;
    while (a!=0 && b!=0){
    	int cana=sqrt(a);
    	int canb=sqrt(b);
    	int dem=0;
    	for (int i=cana;i<=canb;i++){
    		int t=i*i;
    		int tg=(t-1)*2;
    		int cantg=sqrt(tg);
    		if (cantg*(cantg+1)==tg && t>a && t<b) dem++;
		}
		test++;
		cout << "Case " << test << ": " << dem << "\n";
    	cin >> a >> b;
	}
    
}
 