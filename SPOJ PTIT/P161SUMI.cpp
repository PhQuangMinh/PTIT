#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a>b) return 1;
	return 0;
}
int main(){
	faster();
    int n, k; 
    cin >> n >> k;
    string s;
    cin >> s;
    int a[200]={0};
    for (int i=0;i<s.size();i++)
        a[(int)s[i]]++;
    sort(a+65, a+91, cmp);
    long long sum=0;
    for (int i=65;i<=90;i++)
        if (k>0){
        	if (k>=a[i]){
			    sum=sum+(long long)a[i]*a[i];
			    k-=a[i];
			}
			else{
				sum=sum+(long long)k*k;
				break;
			}
		}
    cout << sum;
}
 