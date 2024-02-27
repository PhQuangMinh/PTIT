#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        for (int i=0;i<s.size();i++){
            cout << s[i];
            if (s[i+1]=='0' && s[i+2]=='8' && s[i+3]=='4'){
                i+=4;
                while (i<s.size()){
                    cout << s[i];
                    i++;
                }
                continue;
            }
        }
        if (n!=0) cout << "\n";
    }
}