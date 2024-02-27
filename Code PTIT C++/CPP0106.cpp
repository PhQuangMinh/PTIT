#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int ok=1;
        int l=s.size();
        for (int i=0;i<l/2;i++){
            if (s[i]!=s[l-i-1]) ok=0;
        }
        if (ok) cout << "YES";
        else cout << "NO";
        if (n!=0) cout << "\n";
    }
}