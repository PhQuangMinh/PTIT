#include<bits/stdc++.h>
using namespace std;
void tong(string s, string t){
	int kq[2005];
	int lens=s.size();
	int lent=t.size();
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css= (i>=0) ? s[i]-'0' : 0;
		int cst= (j>=0) ? t[j]-'0' : 0;
		int x=css + cst + du;
	    kq[k]=x%10;
	    du=x/10;
	    k++;
	    j--;
	    i--;
	}
	if (du>0) cout << 1;
	for (i=k-1;i>=0;i--) cout << kq[i];
	cout << "\n";
}
void hieu(string s, string t){
	int kq[2005]={0};
	int check=0;
	if (s.size()<t.size() || s.size()==t.size() && s<t){
		check=1;
		string cmp=s;
		s=t;
		t=cmp;
	}
	int lens=s.size();
	int lent=t.size();
	int i=lens-1;
	int j=lent-1;
	int k=0, du=0;
	while (i>=0 || j>=0){
		int css, cst;
		if (i>=0) css=s[i]-'0';
		else css=0;
		if (j>=0) cst=t[j]-'0';
		else cst=0;
		int x=css - cst - du;
	    if (x<0){
	    	kq[k]=x+10;
	    	du=1;
		}
		else{
		    kq[k]=x;
			du=0;	
		}
	    k++;
	    j--;
	    i--;
	}
	while (kq[k]==0 && k>=1) k--;
	if (check==1) cout << "-";
	for (int i1=k;i1>=0;i1--) cout << kq[i1];
	cout << "\n";
}
void tich(string s, string t){
	int lens=s.size();
	int lent=t.size();
	int kq[20005]={0};
	int x=0, y;
	for (int i=lens-1;i>=0;i--){
		int du=0;
		int s1=s[i]-'0';
		y=0;
		for (int j=lent-1;j>=0;j--){
			int t1=t[j]-'0';
			int tong = t1*s1 + du + kq[x+y];
			kq[x+y]=tong%10;
			du=tong/10;
			y++;
		}
		if (du>0) kq[x+y]=du;
		x++;
	}
	int k=lens+lent-1;
	while (kq[k]==0 && k>=1) k--;
	for(int i=k;i>=0;i--) cout << kq[i];
}
int main(){
    string s, t;
    cin >> s >> t;
	tong(s, t);
	hieu(s, t);
	tich(s, t);
}
 