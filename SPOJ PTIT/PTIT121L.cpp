#include<bits/stdc++.h>
using namespace std;
int main(){
	int r1, d1, r2, d2, r3, d3;
	cin >> d1 >> r1 >> d2 >> r2 >> d3 >> r3;
	if (d1<r1) swap(d1, r1);
	if (d2<r2) swap(d2, r2);
	if (d3<r3) swap(d3, r3);
	if (d2>d1){
		swap(d2, d1);swap(r2, r1);
	}
	if (d3>d1){
		swap(d3, d1);swap(r3, r1);
    }
    if (d3>d2){
		swap(d3, d2);swap(r3, r2);
    }
    int check=0;
	if (d1==d2 && d2==d3 && r1+r2+r3==d1) check=1;
	if (d3==r2 && r2+r1==d1 && d2+r3==d1) check=1;
	if (r2==r3 && r2+r1==d1 && d2+d3==d1) check=1;
	if (d2==d3 && r2+r3==d1 && d2+r1==d1) check=1;
	if (check)cout << d1;
	else cout << "0";
}