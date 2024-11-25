#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int ok=1;
        for (int i=0;i<s.size();i++)
            if (s[i]!='0' && s[i]!='6' && s[i]!='8') ok=0;
        if (ok) cout << "YES";
        else cout << "NO";
        if (n!=0) cout << "\n";
    }
}