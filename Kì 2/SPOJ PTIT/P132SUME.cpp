#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
float dt(int x1, int y1, int x2, int y2, int x3, int y3){
	float kq=abs((float)(x2-x1)*(y3-y1)-(float)(x3-x1)*(y2-y1));
	kq/=2;
	return kq;
}
int main(){
	faster();
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int n;
	cin >> n;
	int dem=0;
	float s=dt(x1, y1, x2, y2, x3, y3); 
	for (int i=1;i<=n;i++){
		int x, y;
		cin >> x >> y;
		float s1=dt(x1, y1, x, y, x2, y2);
		float s2=dt(x1, y1, x, y, x3, y3);
		float s3=dt(x2, y2, x, y, x3, y3);
		float sum=s1+s2+s3;
		if (sum==s){
		    dem++;
//		    cout << sum << " " << x << " " << y << "\n";
		}
	}
	cout << fixed << setprecision(1) << s << "\n" << dem;
} 