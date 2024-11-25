#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s;
	cin >> s;
	int max=0;
    int L=0, R=0;
    int Lm=0, Rm=0;
    for (int i=0; i<s.size(); i++)
    {
        if (s[i]=='L')
        {
            L++;
            Lm++;
            if (Lm-R>max) max=Lm-R; 
        }
        else if (s[i]=='R')
        {
            R++;
            Rm++;
            if (Rm-L>max) max=Rm-L;
        }
        else
        {
            Lm++;
            if (Lm-R>max) max=Lm-R; 
            Rm++;
            if (Rm-L>max) max=Rm-L;
        }
    }
    cout << max;
    return 0;
}