#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> a;
    while (1){
        string s;
        cin >> s;
        if (s=="init"){
            while (!a.empty()) a.pop();
        }
        else 
            if (s=="push"){
                int x;
                cin >> x;
                a.push(x);
            }
            else 
                if (s=="pop"){
                    if (a.size()) a.pop();
                }
                else
                    if (s=="top"){
                        if (a.size()) cout << a.top();
                        else cout << "-1";
                        cout << "\n";
                    }
                    else
                        if (s=="size") cout << a.size() << "\n";
                        else 
                            if (s=="empty"){
                                if (a.size()) cout << 0;
                                else cout << 1;
                                cout << "\n";
                            }
                            else return 0;
    }
} 