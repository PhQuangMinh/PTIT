#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string ma101="ABBADCCABDCCABD";
    string ma102="ACCABCDDBBCDDBB";
    while (n--){
        string ma;
        cin >> ma;
        int d=0;
        string ans;
        if (ma=="101") ans=ma101;
        else ans=ma102;
        for (int i=0;i<15;i++){
            char c;
            cin >> c;
            if (c==ans[i]) d++;
        }
        float res=1.0*d*10/15;
        res=res*100/100;
        printf("%.2f", res);
        if (n!=0) cout << "\n";
    }
}