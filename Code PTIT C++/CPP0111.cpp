#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int ok=1;
        for (int i=1;i<s.size();i++){
            int tmp=(s[i]-'0')-(s[i-1]-'0');
            if (abs(tmp)!=1){
                cout << "NO";
                ok=0;
                break;
            }
        }
        if (ok) cout << "YES";
        if (n!=0) cout << "\n";
    }
}